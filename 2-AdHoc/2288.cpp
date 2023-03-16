#include <iostream>

using namespace std;


int main() {

    int M, N;
    int shift_X, shift_Y;
    int pos_shifted_X, pos_shifted_Y;
    int counter = 1;
    int aux;

    cin >> M >> N;

    while(M != 0 || N != 0){

        cout << "Teste " << counter << endl;

        int television[M][N];
        int temp_array_X [N];
        int temp_array_Y [M];


        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {

                cin >> television[i][j];

            }
        }
        
        cin >> shift_X >> shift_Y;

        while(shift_X != 0 || shift_Y != 0) {

            pos_shifted_X = shift_X%N;
            pos_shifted_Y = shift_Y%M;

            if(pos_shifted_X != 0){

                if(pos_shifted_X < 0){
                    pos_shifted_X = abs(pos_shifted_X);
                }
                else{
                    pos_shifted_X = N - pos_shifted_X;
                }

                for(int j = 0; j < M; j++) {


                   int k = 0;

                    // store first rotated elements
                    for(int i = pos_shifted_X; i < N; i++) {
                        temp_array_X[k] = television[j][i];
                        k++;
                        //cout << temp_array_X[k] << " ";
                    }

                   //cout << endl;

                    // store the last rotated elements
                    for(int i = 0; i < pos_shifted_X; i++){
                        temp_array_X[k] = television[j][i];
                        k++;

                        //cout << temp_array_X[k] << " ";
                    }


                    // copying the elements to original matrix
                    for(int i = 0; i < N; i++) {
                        television[j][i] =  temp_array_X[i];
                        //cout << television[j][i];
                    }
                    
                    /*
                     for(int k = 0; k < pos_shifted_X; k++) {

                        aux = television[j][0];

                        for(int i = 0; i < N - 1; i++){
                            television[j][i] = television[j][i + 1];
                        }
                        television[j][N - 1] = aux;

                    }
                    */
                   // cout << endl;

                }
 
            }
            if(pos_shifted_Y != 0) {

                if(pos_shifted_Y < 0){
                    pos_shifted_Y = M + pos_shifted_Y;
                }

                for(int j = 0; j < N; j++) {


                      int k = 0;

                    // store first rotated elements
                    for(int i = pos_shifted_Y; i < M; i++) {
                        temp_array_Y[k] = television[i][j];
                        k++;
                    }
                    // store the last rotated elements
                    for(int i = 0; i < pos_shifted_Y; i++){
                        temp_array_Y[k] = television[i][j];
                        k++;
                    }

                    // copying the elements to original matrix
                    for(int i = 0; i < M; i++){
                        television[i][j] =  temp_array_Y[i];
                    }

                    /*
                     for(int k = 0; k < pos_shifted_Y; k++) {

                        aux = television[0][j];

                        for(int i = 0; i < M - 1; i++){
                            television[i][j] = television[i+1][j];
                        }
                        television[M - 1][j] = aux;

                    }
                */
                }
            }

            cin >> shift_X >> shift_Y;
        }

        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                cout << television[i][j] << " ";

            }
            cout << endl;
        }

        
        cout << endl;
        counter++;
        cin >> M >> N;

    }

    return 0;
}
