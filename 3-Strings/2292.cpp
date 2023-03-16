#include<iostream>
#include<math.h>
#include <string>
#include <algorithm> 

using namespace std;

int binary2Decimal(int* R , long long int size){
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

void decimal2Binary(long long int decimal, int* binary, long long int size) {

    for(int i = 0; i < size; i++){
        if(decimal > 0){
            binary[i] = decimal % 2;
            decimal /= 2;

        }else{
            binary[i] = 0;
        }
    }

}

int main(){

    int rep;
    long long int decimal_panel;
    string panel;
    long long int switches;
    

    cin >> rep;

    for(int i = 0; i < rep; i++){

        cin >> panel >> switches;

        reverse(panel.begin(), panel.end());

        int binary_panel[panel.length()];

        for(int i = 0; i < panel.length(); i++) {

            if(panel[i] == 'X') {
                binary_panel[i] = 0; 

            }else {
                binary_panel[i] = 1;
            }
        }

        decimal_panel = binary2Decimal(binary_panel, sizeof(binary_panel)/sizeof(int));

        cout << decimal_panel <<  endl;

        decimal_panel += switches;

        decimal2Binary(decimal_panel, binary_panel, sizeof(binary_panel)/sizeof(int));

        
        for(int i = 0; i < panel.length(); i++) {

            if(binary_panel[i] == 0) {
                panel[i] = 'X';
                
            }else {
                panel[i] = 'O';
            }
        }



        cout << panel << endl;

    }
}