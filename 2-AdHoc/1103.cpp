#include <iostream>

using namespace std;

int main(){

    int H1, H2, M1, M2;

    cin >> H1 >> M1 >> H2 >> M2;

    while(H1 != 0 || H2 != 0 || M1 != 0 || M2 != 0) {
        
        if((H1 > H2) || (H1 == H2 && M1 > M2)){
            H2+= 24;
        }

        H1*= 60;
        H2 *= 60;

        int time1, time2;
        time1 = H1 + M1;
        time2 = H2 + M2;

        cout << time2 - time1 << endl;

        cin >> H1 >> M1 >> H2 >> M2;
    }

    return 0;
}