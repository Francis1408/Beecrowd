#include <iostream>


using namespace std;

int main() {

    int H1, H2, M1, M2;
    int duration_hour, duration_min;

    cin >> H1 >> M1 >> H2 >> M2;

    if(H1 < H2) {
        if (M1 <= M2){

            duration_hour = H2 - H1;
            duration_min = M2 - M1;
        }

        else if(M1 > M2) {
            duration_hour = H2 - H1 - 1;
            duration_min = M2 + 60 - M1;
        }
    }
    else if(H1 > H2) {
        if (M1 <= M2){

            duration_hour = H2 + 24 - H1;
            duration_min = M2 - M1;
        }
        else if(M1 > M2) {
            duration_hour = H2 + 23 - H1;
            duration_min = M2 + 60 - M1;
        }
    }
    else if(H1 == H2) {
        if (M1 < M2){

            duration_hour = H2 - H1;
            duration_min = M2 - M1;
        }
        else if(M1 > M2) {
            duration_hour = H2 + 24 - H1;
            duration_min = M1 - M2;
        }
        else {
            duration_hour = 24;
            duration_min = 0;
        }
    }

    cout << duration_hour <<" "<<  duration_min << endl;
    return 0;
}