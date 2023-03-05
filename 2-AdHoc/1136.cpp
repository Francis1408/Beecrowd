#include <iostream>

using namespace std;

int main(){

    int N, B, ball;

    cin >> N >> B;

    bool possible;

    while(N != 0 || B != 0){

        int bag[B];

        for(int i = 0; i < B; i++){
            cin >> ball;
            bag[i] = ball;
        }

        for(int numbers = 0; numbers <= N; numbers++){
            //cout << "Ball: " << numbers << endl;
            //cout << "============== " << endl;

            for(int i=0; i < B; i++){
                possible = false;

                for(int j=i; j < B; j++){
                    //cout << "Draw 1: " << bag[i] << endl;
                    //cout << "Draw 2: " << bag[j] << endl;
                    //cout << "Result: " << abs(bag[i] - bag[j]) << endl;
                    //cout << possible << endl;
                    if(abs(bag[i] - bag[j]) == numbers){
                        //cout << "ACHOU" << endl;
                        possible = true;
                        break;
                    }       
                }
                if(possible)
                    break;
            }
            if(!possible)
                break;
        }

        if(possible)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    cin >> N >> B;
    }
  
    
    return 0;
}