#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;


int Binary2Decimal(int* R , int size){
    int i = 0;
    unsigned long int result = 0;

    /*for(int j = size-1; j >= 0; j--){
       cout << R[j];          
    }
    */
    for(int j = size-1; j >= 0; j--){
        result += R[j]*pow(2, i);
        i++;            
    }

    return result;
}

int MDC(int a, int b){
    if(b > a)
        return MDC(b, a);
     
    if(b == 0) return a;
    else 
        return MDC(b, a % b);
}

int main(){

    int N, decimalS1, decimalS2, love;
    string S1;
    string S2;

    cin >> N;

    for(int i=0; i < N; i++){

        cin >> S1;
        cin >> S2;

        int binaryS1[S1.size()];
        int binaryS2[S2.size()];

        for(int j=0; j < S1.size(); j++){

            binaryS1[j] = (int)S1[j] - 48;
        }

        for(int j=0; j < S2.size(); j++){

            binaryS2[j] = (int)S2[j] - 48;
        }


        decimalS1 = Binary2Decimal(binaryS1, S1.size());
        decimalS2 = Binary2Decimal(binaryS2, S2.size());

         //cout << decimalS1 << " " << decimalS2 << endl;

        love = MDC(decimalS1, decimalS2);

        if(love != 1)
            cout << "Pair #" << i + 1 << ": All you need is love!" << endl;
        else
            cout << "Pair #" << i + 1 << ": Love is not all you need!" << endl;   

    }

    return 0;
}