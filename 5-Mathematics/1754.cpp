#include <bits/stdc++.h>

using namespace std;


int main() {
    long long int machine_time, real_time;
    int num;

    cin >> num;

    for(int i = 0; i < num; i++) {

        cin >> machine_time >> real_time;
        if(real_time > machine_time) cout << "2" << endl;
        else{
            cout << machine_time/real_time + (machine_time % real_time == 0 ? 0 : 1) << endl;
        }
    }
}