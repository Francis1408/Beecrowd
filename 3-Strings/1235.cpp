#include <iostream>
#include <string.h>
#include <stdio.h>



using namespace std;

int main(){
    
    int N, length;

    char lines[101];
    char aux;

    cin >> N;
    cin.getline(lines, 0);

    for(int i = 0; i < N; i++){

        std::cin.getline(lines, 101);

        length = strlen(lines);
        char first_half[length/2];
        char second_half[length/2];

        for(int j = 0; j < length/2; j++){

            first_half[j] = lines[length/2 - j - 1];
            second_half[j] = lines[length - j - 1];
        }

        first_half[length/2] = '\0';
        second_half[length/2] = '\0';

        cout << first_half << second_half << endl;
    
    }



    return 0;
}