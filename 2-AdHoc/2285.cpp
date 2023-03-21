#include <iostream>
#include <bits/stdc++.h>

using namespace std;



bool isPalindrome(string str, int i, int j) {

    while(i < j) {
        if(str[i] != str[j]) return false;
        i++;
        j--;
    }

    return true;
}



/*

int minimalCut(string str, int initial_pos, int size) {

    if( initial_pos >= size  || isPalindrome(str, initial_pos, size)) 
        return 0;

    int minCost = INT_MAX;

    // string temp = "";

    for(int k = initial_pos; k < size; k++){

        int cost = 1 + minimalCut(str, initial_pos , k) + minimalCut(str, k + 1, size);
        minCost = min(cost, minCost);

    }

    return minCost;

}
*/


int main () {

    int length;
    string chain;
    int result;
    int counter = 1;

    cin >> length;
    
    while (length != 0){

        cout << "Teste " << counter << endl;

        cin >> chain;
        int palindromes[length][length]{0};

        for(int i = 0; i < length; i++){
            palindromes[i][i] = 1;
        }

        for(int i = 1; i < length; i++) {
            for(int j = i-1; j >= 0; j--) {
                // check if the substring is a palindrome
                if(chain[i] == chain[j] && (j+1 > i-1) || palindromes[j+1][i-1]) {
                    palindromes[i][j] = 1;

                }
            }

        }

        for(int i = 0; i < length; i++){
            for(int j = 0; j < length; j++) {
                cout << palindromes[i][j] << " "; 
            }

            cout << endl;
        }
        //result = minimalCut(chain, 0 ,length - 1);
       // cout << result + 1 << endl;
        cin >> length;
        counter++;

    }

    return 0;
}