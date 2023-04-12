#include <iostream>

using namespace std;

int main() {

    int total_movements = 0;
    int pins[1001];
    int lock_height, num_pins;
    int difference;

    cin >> num_pins >> lock_height;

    for(int i = 0; i < num_pins; i++) cin >> pins[i];

    for(int i = 0; i < num_pins; i++) {

        difference = lock_height - pins[i];
        total_movements += abs(difference);
        pins[i + 1] += difference; 
            
    }

    cout << total_movements << endl;
    return 0;
}