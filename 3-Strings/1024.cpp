#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int rep;
    string line;
    char aux;

    cin >> rep; 
    getline(std::cin, line);   

    for(int i=0; i < rep; i++){


        cout << line << endl;

       /*
       for(int i=0; i < line.size()/2; i++){
            aux = line[i];
            line[i] = line[line.size()-i];
        }
       */ 
;
        /*
        for(int j=0; j < line.size(); j++){
            if(line[j] >= 65 && line[j] <= 90 || line[j] <= 97 && line[j] >= 122)
            line[j] += 3;
        }
        */

        
       /*
        for(int j=line.size()/2; j < line.size(); j++){
            line[j] -= 1;
        }
       */

    getline(std::cin, line);

    }

    return 0;
}