#include <iostream>
#include <fstream>


using namespace std;

int main(){

    int size;
    ifstream File("teste.txt"); 

    
    while(File.eof()){

        File >> size;

        if(size >= 5 && size <= 101 && size%2 != 0){

            int matrix[size][size];

            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++){
                    matrix[i][j] = 0;
                }
            }

            //Diagonals

            for(int i=0; i < size/3; i++){
                matrix[i][i]= 2;
                matrix[(size-1)-i][(size-1)-i] = 2;
                matrix[i][(size-1)-i] = 3;
                matrix[(size-1)-i][i] = 3;
            }

            //Inner square
            for(int i = size/3; i < size - (size/3); i++){
                for(int j = size/3; j < size - (size/3); j++){
                    matrix[i][j] = 1;
                }
            }

            // Center
            matrix[(size-1)/2][(size-1)/2] = 4;

          // Print
            for(int i = 0; i < size; i++){
                for(int j = 0; j < size; j++){
                    cout << matrix[i][j];
                }
                cout << endl;
            }
        

        }else{
            break;
        }
        cout << endl;

    }
    return 0;

}