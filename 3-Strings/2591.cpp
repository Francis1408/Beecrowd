#include<iostream>


using namespace std;


int main(){

    int begin, end, rep, half=0;
    string goku;

    cin >> rep;

    for(int j=0; j < rep; j++){

        begin = 0;
        end = 0;
        half = 0;

        cin >> goku;

        for(int i=1; i < goku.size(); i++){
            
            if(goku[i] == 'a' && half == 0){
                begin++;
            }else if(goku[i] == 'a' && half == 1){
                end++;
            }else{
                half = 1;
               // i = i + 2;
            }
                
        }
        cout << "k";

        for(int k=0; k<begin*end; k++){
            cout << "a";
        }
        cout << endl;

    }

    return 0;
}