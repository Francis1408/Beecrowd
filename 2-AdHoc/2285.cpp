#include <iostream>
#include <bits/stdc++.h>

#define MAX_SIZE 5000

using namespace std;

char chain[MAX_SIZE + 1];
char palindromes[MAX_SIZE][MAX_SIZE];
int minimalCut[MAX_SIZE];
int minimal;
int length;

// int palindromes[2002][2002] = { 0 };

int main () {

    int result;
    int counter = 1;

    scanf("%d", &length);
    
    while (length != 0){

        printf("Teste %d\n", counter);
        scanf("%s", chain);
        

        
        for(int i = 0; i < length; i++) {
           for(int j = 0; j < length; j++) {
               palindromes[i][j] = 0;
           }
        }

        for(int i = 0; i < length; i++){
            palindromes[i][i] = 1;
        }


        for(int i = 1; i < length; i++) {
            for(int j = i-1; j >= 0; j--) {
                // check if the substring is a palindrome
                if(chain[i] == chain[j] && ((j+1 > i-1) || palindromes[j+1][i-1])) {
                    palindromes[j][i] = 1;

                }
            }

        }


        for(int i = 0; i < length; i++){
            if(palindromes[0][i]) {
                minimalCut[i] = 1;
                continue;
            }
            minimal = 0;
            for(int j = 0; j < i; j++) {

                if(palindromes[j+1][i] && (!minimal || minimalCut[j]  < minimal)) {
                    minimal = minimalCut[j];
                }
                minimalCut[i] = minimal + 1; 
            }
        }

        printf("%d\n\n",minimalCut[length-1]);
    
        //result = minimalCut(chain, 0 ,length - 1);
       // cout << result + 1 << endl;
        scanf("%d", &length);
        counter++;

    }

    return 0;
}