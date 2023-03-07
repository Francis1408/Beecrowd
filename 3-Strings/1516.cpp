#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

    int N,M,A,B;
    int proportion_height, proportion_width;

    cin >> N >> M;

    while(N != 0 && M != 0){

        string drawing[N];

        for(int i = 0; i < N; i++){

            cin >> drawing[i];
        }
        cin >> A >> B;

        proportion_height = A/N;
        proportion_width = B/M;

        string amplified_drawing;

        for(int i = 0; i < N; i++){
            for(int l = 0; l < proportion_height; l ++){      
                for(int j = 0; j < M; j++){
                    for(int k = 0; k < proportion_width; k++){

                        amplified_drawing += drawing[i][j];
                    }                  
                }
                cout << amplified_drawing << endl;
                amplified_drawing.clear();
            }
        }
        
        cout << endl;
        cin >> N >> M;   

    }
}



