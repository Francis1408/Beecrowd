#include <bits/stdc++.h>

#define MAX 2000

using namespace std;

int cidades, ligacoes;
vector<vector<int>>grafo(MAX);
int inicio, fim, P;
int connection;

void BFS(int begin, list<int>queue, bool visited[]) {

    visited[begin] = true;
    queue.push_back(begin);

    while(!queue.empty()) {
        int u = queue.front();
        queue.pop_front();

        for(auto adjacent : grafo[u]) {
            if(!visited[adjacent]) {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }

}

bool checkConection(bool visited[]) {

    for(int i = 0; i < cidades; i++) {
        if(!visited[i])
            return false;
    }

    return true;
} 



int main() {

    cin >> cidades >> ligacoes;

    while(cidades != 0 || ligacoes != 0) {

        bool visited[cidades];
        list<int> queue;

        memset(visited,false, sizeof(visited));
        grafo = vector<vector<int>>(MAX);

        for(int i = 0; i < ligacoes; i++) {
            cin >> inicio >> fim >> P;
            grafo[inicio-1].push_back(fim-1);
            if(P == 2) 
                grafo[fim-1].push_back(inicio-1);
        
        }

        connection = 1;

        for(int i = 0; i < cidades; i++) {

            BFS(i, queue, visited);

            if(!checkConection(visited)) {
                connection = 0;
                cout << "0" << endl;
                break;
            }

            memset(visited,false, sizeof(visited));
        }
        if(connection)
            cout << "1" << endl;
        
        cin >> cidades >> ligacoes;
    }


    return 0;
}
