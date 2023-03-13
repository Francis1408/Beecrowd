#include<iostream>

using namespace std;

int switching_lamps(int turned_off, string panel, int lamp){

    if(lamp >= panel.length())
        return 0;

    if(turned_off){
        if(panel[lamp] == 'O'){
            panel[lamp] = 'X';
            turned_off = 1;
        }else{
            panel[lamp] = 'O';
            turned_off = 0;
        }
    }
    return switching_lamps(turned_off, panel, lamp+1);

}

int main(){

    long int rep;
    string panel;
    long int switches;
    int turned_off = 0;
    int finish = 1;

    cin >> rep;

    for(int i = 0; i < rep; i++){

        cin >> panel >> switches;

        for(int j = 0; j < switches; j++){

            while(finish){

                if(panel[0] == 'O'){

                    panel[0] = 'X';
                    turned_off = 1;
                }else{
                    panel[0] = 'O';
                }

                finish = switching_lamps(turned_off, panel, 1);
            }

        }

        cout << panel << endl;
        turned_off = 0;

    }



}