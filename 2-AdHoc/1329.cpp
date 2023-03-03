#include <iostream>

using namespace std;


int main(){

    int games, matches;
    int mary_score = 0, john_score = 0;

    cin >> matches;

    while(matches != 0){
        for(int i = 0; i < matches; i++){
            cin >> games;
            if(games == 0)
                mary_score++;
            else
                john_score++;
        }

        cout << "Mary won " << mary_score << " times " << "and John won " << john_score << " times" << endl;
        cin >> matches;
        mary_score = 0;
        john_score = 0;
    }



    return 0;
}