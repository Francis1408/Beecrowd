#include<iostream>
#include <string.h>

using namespace std;

int main(){

    int rep;
    char lines[10001];
    char aux;
    int length;

    cin >> rep; 
    cin.getline(lines, 0);
      

    for(int i=0; i < rep; i++){


        std::cin.getline(lines, 10001);
        length = strlen(lines);

         //cout << length << endl;

        for(int j=0; j < length; j++){
            if((int)lines[j] >= 65 && (int)lines[j] <= 90 || (int)lines[j] >= 97 && (int)lines[j] <= 122)
            lines[j] += 3;
        }
        
        //cout << lines << endl;

        for(int j=length-1, k = 0; j >= length/2; j--, k++){
            aux = lines[j];
            lines[j] = lines[k];
            lines[k] = aux; 
        }

        //cout << lines << endl;
       
        for(int j=length/2; j < length; j++){
            lines[j] -= 1;
        }


        lines[length] = '\0';

        cout << lines << endl;
       

    }

    return 0;
}