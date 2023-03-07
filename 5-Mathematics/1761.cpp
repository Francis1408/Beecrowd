#include <iostream>
#include <math.h>
#include<iomanip>


using namespace std;


int main() {

    double A, B, C, m, PI = 3.141592654;

    while(cin >> A >> B >> C){
        m = (B * tan((A * PI) / 180.0) + C) * 5;
        cout << fixed << setprecision(2) << m << endl;
    }
}
