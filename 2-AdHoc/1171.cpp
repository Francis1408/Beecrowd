#include <iostream>

using namespace std;

int main(){

    int quantity;
    int number;
    int aux, counter = 0;
    cin >> quantity;

    int numbers[quantity];
  

    for(int i = 0; i < quantity; i++){
        cin >> number;
        numbers[i] = number;
        }


    
    for(int i = 0; i < quantity; i++){
        for(int j = 0; j < quantity; j++){
            if(numbers[i] < numbers[j]){
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
        }
    }

    aux = numbers[0];

    for(int i = 0; i < quantity; i++){
        if(numbers[i] == aux){
            counter++;
        }else{
            cout << aux << " aparece " << counter << " vez(es)" << endl;
            aux = numbers[i];
            counter = 1; 
        }
    }
     cout << aux << " aparece " << counter << " vez(es)" << endl;
}


