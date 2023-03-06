#include<iostream>


using namespace std;

int main(){

    int rep, shifts;
    string line;
    char aux;

    cin >> rep; 
     

    for(int i=0; i < rep; i++){
        cin >> line;
        if(line.size() <= 50){
            cin >> shifts;
            for(int i = 0; i < line.size(); i++){
                if((int)line[i] - shifts < 65){
                    line[i] = 91 - (65 - (line[i] - shifts));
                }else{
                    line[i] -= shifts;
                }
            } 
        }
        cout << line << endl;

    }

    return 0;
}