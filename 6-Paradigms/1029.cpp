#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int casos;
int fib;
vector<int> fibonacci;
vector<int> calls;

void fib_calls(int n) {
    for(int i = 0; i < n - 1; i++) {
        fibonacci.push_back(0);
        calls.push_back(0);
    }

    for(int i = 2; i < n + 1; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        calls[i] = calls[i-1] + calls[i-2] + 2;
    }
}


int main() {
    cin >> casos;

    for(int i = 0; i < casos; i ++) {
        cin >> fib;
        fibonacci = {0 , 1};
        calls = {0, 0};
        fib_calls(fib);
        cout << "fib(" << fib << ") = " << calls[calls.size() - 1] << " calls = " << fibonacci[fibonacci.size() - 1] << endl; 
    }

}