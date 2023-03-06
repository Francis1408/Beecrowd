#include <iostream>
#include <fstream>
#include <math.h>



using namespace std;


int Decimal2binary(int A[32], unsigned long int number){

    int aux;
    int i=0;
    while(number > 0 ){
        aux = number%2;
        A[i] = aux;
        number = number/2;
        i++;
    }
    /*
    for(int j = i-1; j >= 0; j--){
        cout << A[j];           
    }
    cout << endl;
    */
    
    return i;

}

void Binary2Decimal(int R[32], int size){
    int i = 0;
    unsigned long int result = 0;

    /*for(int j = size-1; j >= 0; j--){
       cout << R[j];          
    }
    */
    for(int j = 0; j < size; j++){
        result += R[j]*pow(2, i);
        i++;            
    }

    cout << result << endl;

}


int main(){

    unsigned long int number1, number2;
    int A[32], B[32];
    int size1, size2, diff, greater;
    ifstream File("teste.txt"); 

    while(!File.eof()){
        File >> number1 >> number2;

        size1 = Decimal2binary(A, number1); 
        size2 = Decimal2binary(B, number2); 
      
        //diff = abs(size1 - size2);

       // cout << size1 << " " << size2 << " " << diff;

        if(size1 >= size2){
            for(int i = 0; i < size1 - (size1-size2); i++){
                if(A[i] + B[i] == 2 ){
                    A[i] = 0;
                }else{
                    A[i] += B[i];
                }
                 //cout << A[i];
            }

            //cout << endl;
            Binary2Decimal(A, size1);
            

        }else{
            for(int i = 0; i < size2 - (size2-size1); i++){
                if(A[i] + B[i] == 2 ){
                    B[i] = 0;
                }else{
                    B[i] += A[i];
                }
            }

            Binary2Decimal(B, size2); 

        }

    }
  
}
