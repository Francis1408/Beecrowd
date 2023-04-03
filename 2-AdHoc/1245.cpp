#include <bits/stdc++.h>

using namespace std;

int n, MAX = 61, answer = 0;
vector< pair<int, int> > v(MAX, {0, 0});

int main() {
    
    while(cin >> n) {
        answer = 0;
        while(n--) {
            int i = 0;
            char pe;
            cin >> i >> pe;
            if(pe == 'D') v[i].second++;
            else v[i].first++;
        }
        
        for(int i = 0; i < MAX; i++) {
            answer += min(v[i].first, v[i].second);
        }
        
        cout << answer << endl;
        
        for(int i = 0; i < MAX; i++)
            v[i] = {0, 0};
    }

    return 0;
}