#include <iostream>

using namespace std;

int main() {
 
 int matches = 1;
 int rep = 0;
 char player1 [11];
 char player2[11];
 int result1, result2;


 cin >> matches;

 while(matches != 0){

    rep+= 1;
    cin >> player1 >> player2;

    cout << "Teste " << rep << endl; 

    for(int i = 0; i < matches; i++) {

        cin >> result1 >> result2;


        if((result1 + result2)%2 == 0){
            cout << player1 << endl;

        }else{
            cout << player2 << endl;
        }
    }

    cout << endl;
    cin >> matches;

 }


 return 0; 


}