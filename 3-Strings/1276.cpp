#include <bits/stdc++.h>
#include <climits>

using namespace std;

#define pb push_back

vector<bool> vec(27);

string str;


int main() {
    while(getline(cin, str)) {
        for(auto ch : str) {
            if(ch != ' ') vec[ch - 97] = true;
        }

        vector< pair<char, char> > answer;

        char start = '/', end = '/';
        
        for(int i = 0; i < 26; i++) {
            if(start == '/' && vec[i] == true)
                start = i + 97, end = i + 97;
            else if(vec[i])
                end = i + 97;
            else if(!vec[i] && start != '/' && end != '/') {
                answer.push_back({start, end});
                start = '/';
                end = '/';
            }
        }

        if(start != '/' && end != '/') {
            if(answer.empty()) {
                answer.pb({start, end});
            }
            else if(answer[answer.size() - 1].first != start && answer[answer.size() - 1].second != end) answer.pb({start, end});
        }

        int size = answer.size();

        for(int i = 0; i < size; i++) {
            cout << answer[i].first << ":" << answer[i].second;
            if(i != size - 1)
                cout << ", ";
        }
        cout << endl;
        
        for(int i = 0; i < 27; i++) vec[i] = false;

        answer.erase(answer.begin(), answer.end());
        vec.erase(vec.begin(), vec.end());
    }

    return 0;
}