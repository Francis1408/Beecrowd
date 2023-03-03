#include <iostream>

using namespace std;

int main(){

    int L, R;

    while(L != 0 & R != 0){

        cin >> L >> R;


        if(L>= 1 && L <= 5 & R >= 1  & R <= 5){
            cout << L+R << endl;
        }
        else
            break;

    }


    return 0;
}