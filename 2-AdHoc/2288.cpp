#include <iostream>

using namespace std;


int main() {

    int M, N;
    int shift_X, shift_Y;
    int pos_shifted_X, pos_shifted_Y;
    int printed_X, printed_Y;
    int counter = 1;
    int aux;

     scanf("%d %d", &M, &N);

    while(M != 0 || N != 0){

        pos_shifted_X = 0;
        pos_shifted_Y = 0;

        printf("Teste %d\n", counter);

        int television[M][N];
        int temp_array_X [N];
        int temp_array_Y [M];


        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {

                scanf("%d", &television[i][j]);

            }
        }

        scanf("%d %d", &shift_X, &shift_Y);

        while( shift_X || shift_Y) {

            pos_shifted_X+= shift_X;
            pos_shifted_Y+= shift_Y;

              scanf("%d %d", &shift_X, &shift_Y);
        }

        pos_shifted_X = pos_shifted_X%N;
        pos_shifted_Y = pos_shifted_Y%M;

        pos_shifted_Y = -pos_shifted_Y;



        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {

                if(j != 0) printf(" ");

                printed_Y = (M + (i - pos_shifted_Y) % M) % M;
                printed_X = (N + (j - pos_shifted_X) % N) % N;

                 printf("%d", television[printed_Y][printed_X]);

            }
            cout << endl;
        }

        
        cout << endl;
        counter++;

         scanf("%d %d", &M, &N);

    
    }
    return 0;
}
