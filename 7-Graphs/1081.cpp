#include <bits/stdc++.h>

#define MAX 20

using namespace std;

vector<vector<int>>grafo;
bool visited[MAX];
int vertices, arestas;
int inicio, fim;
bool flag;
int n_casos;


void DFS(int begin, int blank_spaces) {

    visited[begin] = true;

    for(auto j : grafo[begin]) {
        flag = true;
        for(int i = 0; i < blank_spaces; i++) {
               cout << "  ";
            }
        if(!visited[j]){
            cout << begin << "-" << j << " pathR(G," << j << ")" << endl;
            DFS(j, blank_spaces+1); 
        
        }else {
            cout << begin << "-" << j << endl;
        }

    }
}

int main() {

    cin >> n_casos;

    for(int i = 0; i < n_casos; i++) {

        cout << "Caso " << i+1 << ":" << endl;

        cin >> vertices >> arestas;

        memset(visited,false, sizeof(visited));
        grafo = vector<vector<int>>(MAX);

        for(int j = 0; j < arestas; j++) {
            cin >> inicio >> fim;
            grafo[inicio].push_back(fim);
        }

         for(int j = 0; j < vertices; j++) {
            sort(grafo[j].begin(), grafo[j].end());
        }

        for(int j = 0; j < vertices; j++) {
            flag = false;
            if(!visited[j]) {
                //cout << endl;
                DFS(j, 1);
            }
            if(flag) cout << endl;
        }
    }

    return 0;
}
