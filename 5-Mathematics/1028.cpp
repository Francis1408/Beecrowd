#include <bits/stdc++.h>

#define MAX 1001

using namespace std;

int MDC(int F1, int F2) {

    int div;

    while( F2 != 0) {
        div = F1 % F2;
        F1 = F2;
        F2 = div;
    }
        
    
    return F1;

}

int F1, F2, max, rep;

int main() {

    cin >> rep;

    for(int i = 0; i < rep; i++) {

        cin >> F1 >> F2;
        int result =  MDC(F1,F2);

        cout << result << endl;
    }
    

    return 0;
}