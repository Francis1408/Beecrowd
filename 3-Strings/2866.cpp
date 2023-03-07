#include <iostream>
#include <fstream>


using namespace std;

int main(){

    int rep;
    string message;

    cin >> rep;

    for(int i = 0; i < rep; i++){

        cin >> message;

        for(int j = message.size()-1; j >= 0; j--){
            
            if(message[j] >= 97 && message[j] <= 122){
                cout << message[j];
            }
        } 

        cout << endl;
    }




    return 0;
}