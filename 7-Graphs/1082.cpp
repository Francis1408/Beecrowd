#include <bits/stdc++.h>

#define MAX 27

using namespace std;

vector<vector<int>> grafo;
list<int> caminho;
int casos, vertices, arestas;
char v_inicio, v_fim;
bool visited[MAX];

void DFS(int begin) {

    visited[begin] = true;
    caminho.push_back(begin);

    for(auto j : grafo[begin]) {
        if(!visited[j])
            DFS(j);
    }
}

int main() {

    int connected_components;
    cin >> casos;

    for(int i = 0; i < casos; i++) {

        cout << "Case #" << i + 1 <<":" << endl;

        cin >> vertices >> arestas;

        memset(visited,false, sizeof(visited));
        grafo = vector<vector<int>>(MAX);
        connected_components = 0;

        for(int j = 0; j < arestas; j++) {
            cin >> v_inicio >> v_fim;
            
            grafo[(int)v_inicio - 97].push_back((int)v_fim - 97);
            grafo[(int)v_fim - 97].push_back((int)v_inicio - 97);
        }

        for(int j = 0; j < vertices; j++) {
            if(!visited[j]) {
                connected_components++;
                DFS(j);
                caminho.sort();

                for(auto x : caminho) {
                    
                    cout << (char)(x+97) << ",";
                }
                cout << endl;
                caminho.clear();
            }
        }

        cout << connected_components << " connected components" << endl << endl;
        

    }

}





