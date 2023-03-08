#include<iostream>


using namespace std;

int main(){

    long long int sides;
    long long int diagonals;

    cin >> sides;

    diagonals = ((sides*(sides-3))/2);

    cout << diagonals << endl;

    return 0;

}