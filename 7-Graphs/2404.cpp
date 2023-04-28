#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;


int minKey(int key[], bool mstSet[], int N) {

    int min = INF;
    int min_index;

    for(int j = 0; j < N; j++) {
        if(mstSet[j] == false && key[j] < min){

            min = key[j];
            min_index = j;
        }
    }

    return min_index;
}

int main() {


    int N,M,U,V,C;

    cin >> N >> M;

   vector <vector<int>> graph(N, vector<int>(N, INF));

    for(int i = 0; i < M; i++) {

        cin >> U >> V >> C;
        U--, V--;

        graph[U][V] = C;
        graph[V][U] = C;
    }

    
    int parent[N];
    int key[N];
    bool mstSet[N];

    for(int i = 0; i < N; i++) {
        key[i] = INF;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for(int i = 0; i < N-1; i++){

        int u = minKey(key, mstSet, N);
        mstSet[u] = true;

        for(int j = 0; j < N; j++) {
            if(graph[u][j] && mstSet[j] == false && graph[u][j] < key[j]) {

                parent[j] = u;
                key[j] = graph[u][j];
            }
        }
    }

    int total = 0;

    for(int i = 1; i < N; i++) {
        
        total += graph[i][parent[i]];
    }

    cout << total << endl; 

    return 0;
}