#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int netos;
int maior, menor;
vector<int> presentes;
int presente;

int main() {

    cin >> netos;

    while(netos) {

        maior = 0;
        menor = INF;

        for(int i = 0; i < 2*netos; i++) {
            cin >> presente;
            presentes.push_back(presente);
        }

        sort(presentes.begin(), presentes.end());

        for(int i = 0, j = 2*netos - 1; i < netos; i++, j--) {
            if(maior < presentes[i] + presentes[j])
                maior = presentes[i] + presentes[j];

            if(menor > presentes[i] + presentes[j])
                menor = presentes[i] + presentes[j];

        }

        cout << maior << " "<< menor << endl;

        presentes.clear();
        cin >> netos;
    }

}