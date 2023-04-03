#include <bits/stdc++.h>

using namespace std;

string n;

int main() {
    set<string> s;
    while(cin >> n) {
        s.insert(n);
    }
    cout << s.size() << endl;

    return 0;
}