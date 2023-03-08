#include <iostream>
#include <string>

using namespace std;


int main(){

    string first_line;
    string values;
    

    cin >> first_line;

    string matring[first_line.size()];

    // Add first line
    for(int i = 0; i < first_line.size(); i++){

        matring[i] = first_line[i];

    }
  
    // Add the remain
    for(int k = 1; k < 4; k++ ){
        cin >> values;
        for(int j = 0; j < first_line.size(); j++){

            matring[j] = matring[j] + values[j];
            //cout << matring[j][k] << endl;
        }

    }

    for(int j = 1; j < first_line.size() - 1; j++){
        cout << char((stoi(matring[0])*stoi(matring[j])+stoi(matring[first_line.size()-1]))%257);

    }

    cout << endl;


 return 0;
    
}
