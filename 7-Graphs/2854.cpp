#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define MAX 301

using namespace std;

map<string, int> links; 

void DFS(vector<int> grafo[], bool visitado[], int begin) {

    visitado[begin] = true;

    for(auto j : grafo[begin]) {
        if(!visitado[j])
            DFS(grafo, visitado, j);
    }
}



int main() {

    vector<int> grafo[MAX];
    int membros, ralacoes;
    bool visited[MAX];
    string nome1, nome2, parentesco;
    int counter = 0;
    int familias = 0;

    memset(visited,false, sizeof(visited)); 

    cin >> membros >> ralacoes;

    for(int i = 0; i < ralacoes; i++) {

        cin >> nome1 >> parentesco >> nome2;
        int de, para;

        if(links.count(nome1)) {
            de = links[nome1];
        }
        else {
            de = counter;
            links[nome1] = counter++;
        }

        if(links.count(nome2)) {
            para = links[nome2];
        }
        else{
            para = counter;
            links[nome2] = counter++;
        }

        grafo[de].push_back(para);
        grafo[para].push_back(de);

    }

    for(int i = 0; i < membros; i++) {
        if(!visited[i]) {
            familias++;
            DFS(grafo, visited, i);
        }
    }

    cout << familias << endl;

    return 0;

}
