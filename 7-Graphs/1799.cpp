#include <bits/stdc++.h>
#include <string>

#define MAX 4010
#define INF 0x3f3f3f3f

using namespace std;


map<string, int> links;


int BFS(vector<int> grafo[], int origem, int destino, int tamanho, int parents[], int distancia[]) {

    bool visitado[tamanho];
    list<int> fila;

    for(int i = 0; i < tamanho; i++) {
        visitado[i] = false;
        distancia[i] = INF;
        parents[i] = -1;
    }

    visitado[origem] = true;
    distancia[origem] = 0;
    fila.push_back(origem);

    while(!fila.empty()) {
        int u = fila.front();
        fila.pop_front();
        for(int i = 0; i < grafo[u].size(); i++) {
            if(visitado[grafo[u][i]] == false) {
                visitado[grafo[u][i]] = true;
                distancia[grafo[u][i]] = distancia[u] + 1;
                parents[grafo[u][i]] = u;
                fila.push_back(grafo[u][i]);

                if(grafo[u][i] == destino)

                    return distancia[destino]; 
            }
        }
    }
    return -1;
}

int main() {


    int pontos, ligacoes;
    string origem, destino;
    int counter = 0;
    int entrada, saida, queijo;
    int pontos_passados = 0;
    

    cin >> pontos >> ligacoes;

    vector<int> grafo[MAX];
    int parents[pontos];
    int distancia[pontos];    

    for(int i = 0; i < ligacoes; i++) {

        cin >> origem >> destino;
        int de, para;

        if(links.count(origem)) {
            de = links[origem];
        }
        else{
            de = counter;
            links[origem] = counter++;
        }

        if(origem == "Entrada") entrada = de;
        else if(origem == "Saida") saida = de;
        else if(origem == "*") queijo = de;

        if(links.count(destino)) {
            para = links[destino];
        }
        else{
            para = counter;
            links[destino] = counter++;
        }

        if(destino == "Entrada") entrada = para;
        else if(destino == "Saida") saida = para;
        else if(destino == "*") queijo = para;

        grafo[de].push_back(para);
        grafo[para].push_back(de);

    }

    //cout << entrada << " " << saida << " " << queijo << endl;

/*
    for(const auto el : links) {
        cout << el.first << ": ";
        for(auto adj : grafo[el.second]) {
            for(auto v: links) {
                if(v.second == adj) cout << v.first << " ";
            }
        }
        cout << endl;
    }
*/

    // Entrada para o queijo
    pontos_passados += BFS(grafo, entrada, queijo, pontos, parents, distancia);
    // Queijo para a saida
    pontos_passados += BFS(grafo, queijo, saida, pontos, parents, distancia);
    
    cout << pontos_passados << endl;

    return 0;
}