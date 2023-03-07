#include <iostream>
#include <fstream>

using namespace std;


int main(){
    
    int procs;
    int inst_count = 0;
    string trace;
    int cicles = 0;

    ifstream File("teste.txt");

    while(!File.eof()){

        File >> trace >> procs;


        for(int i=0; i < trace.size(); i++){   

            if(trace[i] == 'R'){
                inst_count++;

                if(inst_count == procs){
                    cicles++;
                    inst_count = 0;
                }
            }
            else{
                cicles++;
                if(inst_count > 0){
                     inst_count = 0;
                     cicles++;

                }
            }

        }

        if(inst_count > 0)
            cicles++;

        cout << cicles << endl;
        cicles = 0;
        inst_count = 0;
    }

    return 0;
}