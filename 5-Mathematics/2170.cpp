
#include <iostream>
#include<iomanip>

using namespace std;



int main(){

    long double X;
    long double Y;

    int time = 1;

    long double interest;

    while( scanf("%Lf %Lf", &X, &Y) == 2){

        interest = 100*((Y/X) - 1);

        cout << "Projeto " << time << ":" << endl 
             << "Percentual dos juros da aplicacao: " << fixed << setprecision(2) << interest << " %" << endl; 

    time++;


    }
    cout << endl;

 return 0;
    
}
