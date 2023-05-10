#include <bits/stdc++.h>

#define MAX 1040

using namespace std;

char grafo[MAX][MAX+4];
int M, N;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool inGrid(int i, int j) {
    if(grafo[i][j] == '.' ||i < 0 || i >= N || j < 0 || j >= M) {
        return false;
    }
    return grafo[i][j] == '.';
}

void DFS(int i, int j) {

    grafo[i][j] = 'o';
    for(int x = 0; x < 4; x++) {
        if(inGrid(i + dx[x], j + dy[x]))
            DFS(i + dx[x], j + dy[x]);
    }

}

int main() {

    int num_clicks = 0;

    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < N; i++) {
        scanf("%s", grafo[i]);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(grafo[i][j] == '.') {
                num_clicks++;
                DFS(i, j);
            }
        }
    }

    printf("%d\n", num_clicks);

    return 0;

}