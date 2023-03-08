#include <iostream>


using namespace std;

int MDC(int a, int b){

    if(a == 0)
        return b;
    return MDC(b % a, a);

}

int main(){

    int num_holes;
    int time;
    int current_hole;
    int res = 1;

    cin >> num_holes;

    int path[num_holes];

    for(int i =0; i < num_holes; i++){

        cin >> path[i];
    }

    for(int i = 0; i < num_holes; i++){

        time = 1;
        current_hole = path[i] - 1;

        while(current_hole != i){
            time++;
            current_hole = path[current_hole] - 1;
        }

        res = (res/MDC(res, time))*time;
           
    }

    cout << res << endl;
    

    return 0;
}