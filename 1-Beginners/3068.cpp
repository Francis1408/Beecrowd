#include <iostream>

using namespace std;

int main() {

    int X1,X2,Y1,Y2;
    int meteors;
    int meteor_X, meteor_Y;
    int counter = 1;
    int num_hits;

    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

    while(X1, X2, Y1, Y2 != 0){

        num_hits = 0;

        scanf(" %d", &meteors);

        for(int i = 0; i < meteors; i++) {

             scanf(" %d %d", &meteor_X, &meteor_Y);


            if(meteor_X >= X1 && meteor_X <= X2) {
                if(meteor_Y >= Y2 && meteor_Y <= Y1) {
                    num_hits++;
                }
            }
        }

        printf("Teste %d\n", counter); 
        printf("%d\n", num_hits);

        counter++;

        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    }



    return 0;
}