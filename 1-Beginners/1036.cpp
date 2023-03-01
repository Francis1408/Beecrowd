#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    double a, b, c;

    cin >> a >> b >> c;

    double delta;

    delta = pow(b,2) - (4*a*c);

    double result1, result2;

    
    result1 = (-b + sqrt(delta))/(2*a);
    result2 = (-b - sqrt(delta))/(2*a);

    if(isnan(result1) || isnan(result2)){
        cout << "Impossivel calcular" << endl;

    }else{
       cout << "R1 = " << fixed << setprecision(5)  << result1 << endl;
       cout << "R2 = " << fixed << setprecision(5)  << result2 << endl;
    }

}