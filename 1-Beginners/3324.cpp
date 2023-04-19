#include <iostream>
#include <string>

using namespace std;


int main() {

    string jon;
    string doctor;

    cin >> jon;
    cin >> doctor;

    if(jon.find(doctor) != string::npos)
        cout << "go" << endl;

    else{
        cout << "no" << endl;
    }


    return 0;

}