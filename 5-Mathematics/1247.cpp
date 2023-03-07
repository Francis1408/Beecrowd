#include <iostream>
#include <fstream>
#include <math.h>


using namespace std;


int main(){

    int D, VF, VG;
    double time_reach, time_escape, distance;
    bool possible;

    while(scanf("%d %d %d", &D, &VF, &VG) == 3){


        if( VF >= VG){
            possible = false;   
        }
        else{

            distance = sqrt(144 +D*D);

            time_escape = (double)12/VF;
            //cout << time_escape << endl;
            time_reach = (double)distance/VG;
            //cout << time_reach << endl;

            if(time_escape >= time_reach)
                possible = true;
            else
                possible = false;

        }
        if(possible)
            cout << "S" << endl;
        else
            cout << "N" << endl;

    }

}



