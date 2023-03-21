#include <iostream>
#include <string.h>

using namespace std;


int main() {

    int qtd_numbers;
    int result = 0;
    int signal, number;
    int counter = 1;
    string equation;

    cin >> qtd_numbers;
    
    while(qtd_numbers != 0){

        result = 0, number = 0, signal = 1;
        cin >> equation;

        for(int i = 0; i < equation.length(); i++){

            if(equation[i] == '-'){
                if(signal == 0) result -= number;
                else result += number;

                signal = 0; number = 0;
            }
            else if(equation[i] == '+'){
                if(signal == 0) result -= number;
                else result += number;

                signal = 1; number = 0;
            }

            else if(equation[i] >= 48 && equation[i]<= 58) {
                number = number*10+(equation[i]-48);
            } 
       }

       if(signal == 0) result -= number;
       else result += number;  

       cout << "Teste " << counter << endl;
       cout << result << endl << endl;

       counter++;

       cin >> qtd_numbers;
    }


    return 0;
}