#include <bits/stdc++.h>

#define int long long int

using namespace std;

const int INF = 0x3f3f3f3f3f3f3f;

int32_t main() {
    int N;
    ios_base::sync_with_stdio(false); // Otimização para entrada e saída padrão
    cin.tie(NULL); // Otimização para entrada e saída padrão
    while(cin >> N) {
        vector<int> somas(N);
        int r = N - 1;
        int l = 0;
        int dif = INF;
        
        for(int i = 0; i < N; i++) {
            cin >> somas[i];
            if(i > 0) somas[i] += somas[i - 1]; // Acúmulo incremental
        }
        
        if(N == 1) {
        	cout << somas[0] << endl;
        	continue;
        }
        
        int somaTotal = somas[N - 1];
        
        while(l < r) {
            int m = (l + r) / 2;
            
            int gugu = somaTotal - somas[m];
            int diferenca2 = gugu - somas[m];
            
            if(abs(diferenca2) < dif) dif = abs(diferenca2); // Comparação direta
            if(diferenca2 >= 0) l = m + 1; // Se o lado do Gugu > lado do Rangel, deve-se pegar mais trabalho para o Rangel
            else r = m; // Oposto
        } 
        cout << dif << "\n";
    }

    return 0;
}