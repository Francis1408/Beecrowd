#include <iostream>
#include <string.h>

using namespace std;


int main() {

    int qtd_numbers = 1;
    int result = 0;
    
    while(qtd_numbers != 0){

        cin >> qtd_numbers;

        char equation [2*qtd_numbers - 1];

        std::cin.getline(equation, 2*qtd_numbers - 1);

        result = int(equation[0]) - 48;

        

    }





    return 0;
}