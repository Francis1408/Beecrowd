#include<iostream>

using namespace std;

string switching_lamps(string panel, int lamp){

    if(panel[lamp] == 'O'){
            panel[lamp] = 'X';
        }else{
            panel[lamp] = 'O';
            return panel;
        }

    return switching_lamps(panel, lamp+1);

}

int main(){

    int rep;
    string panel;
    long long int switches;
    

    cin >> rep;

    for(int i = 0; i < rep; i++){

        cin >> panel >> switches;

        for(int j = 0; j < switches; j++){

            panel = switching_lamps(panel, 0);

        }
        cout << panel << endl;

    }
}