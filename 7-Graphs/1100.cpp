#include <bits/stdc++.h>

#define MAX 64

using namespace std;

map<char, int>mp;
int movements[8][2] = {{-2,-1}, {-2,1}, {-1,-2}, {1,-2}, {2,-1}, {2,1}, {1,2}, {-1,2} };
string inicio, fim;
bool visitado[MAX];


void mapeiaTabuleiro() {
    mp.insert({'a',0});
    mp.insert({'b',1});
    mp.insert({'c',2});
    mp.insert({'d',3});
    mp.insert({'e',4});
    mp.insert({'f',5});
    mp.insert({'g',6});
    mp.insert({'h',7});
    mp.insert({'1',0});
    mp.insert({'2',1});
    mp.insert({'3',2});
    mp.insert({'4',3});
    mp.insert({'5',4});
    mp.insert({'6',5});
    mp.insert({'7',6});
    mp.insert({'8',7});
    
}

bool checkBoundary(int i, int u) {

   // cout << u/8 << " " << u%8 <<  endl;

    if(movements[i][0] + u/8 <= 7 && movements[i][0] + u/8 >= 0 
    && movements[i][1] + u%8 <= 7 && movements[i][1] + u%8 >= 0) {

        return false;
    }

    return true;
}


int BFS(int col_inicio, int lin_inicio, int col_fim, int lin_fim, int plays) {

    list<int>fila;
    
    visitado[8*col_inicio + lin_inicio] = true;
    fila.push_back(8*col_inicio + lin_inicio);


    while(!fila.empty()) {
        int u = fila.front();
        cout << u << endl;
        fila.pop_front();
        for(int i = 0; i < 8; i++) {
            if(checkBoundary(i, u)) {
                int x = 8*(movements[i][0] + u/8) + movements[i][1] + u%8;
                //cout << 8*movements[i][0]  << " " << u << endl;
                if(!visitado[x]) {
                    visitado[x] = true;
                    if(x == (8*col_fim + lin_fim))
                        return plays;
                    fila.push_back(x);
                }         
            }else continue;
        }
        plays++;
    }
    return -1;
}



int main() {
    
    int col_inicio, lin_inicio;
    int col_fim, lin_fim;
    mapeiaTabuleiro();
    cin >> inicio >> fim;

    while(inicio != fim) {

        memset(visitado,false, sizeof(visitado));


        if(inicio == fim) {
            cout << "To get from " << inicio << " to " <<  fim << " takes 0 knight moves." << endl;
        
        }else {

            cout << inicio[0] << inicio[1] << endl;
            col_inicio = mp[inicio[0]];
            lin_inicio = mp[inicio[1]];

           // cout << begin[0] << endl;

            col_fim = mp[fim[0]];
            lin_fim = mp[fim[1]];

            //cout << (8*col_inicio) + lin_inicio << endl;
            int total = BFS(col_inicio, lin_inicio, col_fim, lin_fim , 1);
            cout << "To get from " << inicio << " to " <<  fim << " takes " << total << " knight moves." << endl;
        }

        cin >> inicio >> fim;
    }

    return 0;

}