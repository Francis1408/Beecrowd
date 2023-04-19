#include <iostream>
#include <math.h>

using namespace std;

int R1, X1, Y1, R2, X2, Y2;


int main () {

    while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2 ){

        float distance;

        distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

        if(R1 >= distance + R2) {
            cout << "RICO" << endl;
        }
        else cout << "MORTO" << endl;

    }

    return 0;
}