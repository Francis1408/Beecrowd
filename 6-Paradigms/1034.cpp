#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define MAX 1000001

using namespace std;

vector<int> blocos;
int menor = INF;
int peca[MAX];
int casos, num_blocos, peca_tam, valor_bloco;

int main() {

    cin >> casos;

    for(int i = 0; i < casos; i++) {

        memset(peca, 0, sizeof(peca));
        blocos.clear();

        cin >> num_blocos >> peca_tam;

        for(int j = 0; j < num_blocos; j++) {
            cin >> valor_bloco;
            blocos.push_back(valor_bloco);
            //cout << blocos[j] << endl;
        }

        for(int j = 1; j < peca_tam + 1; j++) {
            menor = INF;
            for(int k = 0; k < num_blocos; k++) {
                if(blocos[k] <= j)
                    menor = min(menor, peca[j-blocos[k]]);
                    //cout << peca[j-blocos[k]] << endl; 
            }
            peca[j] = 1 + menor;
        }
        cout << peca[peca_tam] << endl;
    }

}