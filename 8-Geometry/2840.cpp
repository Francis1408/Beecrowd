#include <iostream>
#include <math.h>
#include <tgmath.h>

using namespace std;


long long int radius, helium;

int main () {

    cin >> radius >> helium;
    float volume;

    volume = (4 * 3.1415 * pow(radius, 3))/3;

    int num_ballons = floor(helium/volume);

    cout << num_ballons << endl;


    return 0;
}