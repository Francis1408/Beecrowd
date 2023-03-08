#include <iostream>


using namespace std;


int main(){

    int participants, hotels, weeks;
    long int budget, hotel_price, beds;

    cin >> participants >> budget >> hotels >> weeks;

    int cheaper = budget+1;
    int total_price = budget+1;

    for(int i = 0; i < hotels; i++){


        cin >> hotel_price;

        for(int j = 0; j < weeks; j++){
            cin >> beds;

            if(beds >= participants){
                total_price = participants*hotel_price;
            }
        }

       // cout << total_price << endl;

        if(total_price < cheaper){
            cheaper = total_price;
        }

    }

    if(cheaper <= budget)
        cout << cheaper << endl;
    else
        cout << "stay home" << endl;


    return 0;
}