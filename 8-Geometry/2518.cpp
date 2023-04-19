#include <iostream>
#include <math.h>

using namespace std;

int main () {

    int n;

    while (cin >> n) {

        float h, c, l;

        cin >> h >> c >> l;

        float ramp_length = n*(sqrt((h*h) + (c*c)));
        float area = (ramp_length*l)/10000;

        cout.precision(4);
        cout << fixed << area << endl;
    }

    return 0;
}