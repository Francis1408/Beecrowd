#include <bits/stdc++.h>

using namespace std;


int main() {
    int N; cin >> N;

    vector <int> v(N);

    for(auto &i : v) cin >> i;


    // Lado Direito
    int rightHandSide[N]; rightHandSide[N - 1] = 1;

    for(int i = N - 2; i >= 0; i--) {
        if(v[i] > rightHandSide[i + 1]) rightHandSide[i] = rightHandSide[i + 1] + 1;
        else rightHandSide[i] = v[i];
    }


    // Lado Esquerdo
    int leftHandSide[N]; leftHandSide[0] = 1;


    for(int i = 1; i < N; i++) {
        if(v[i] > leftHandSide[i - 1]) leftHandSide[i] = leftHandSide[i - 1] + 1;
        else leftHandSide[i] = v[i];
    }

    int isosceles = 1;

    for(int i = 0; i < N; i++) isosceles = max(isosceles, min(leftHandSide[i], rightHandSide[i]));
    cout << isosceles << endl;

    return 0;
}