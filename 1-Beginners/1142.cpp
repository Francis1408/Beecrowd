#include <iostream>


using namespace std;

int main(){

    int repetition;
    cin >> repetition;

    for(int i=0; i < repetition*4; i= i+4){
        cout << i+1 << " " << i+2 << " " << i+3 << " " << "PUM" << endl;

    }


}