#include <bits/stdc++.h>

#define distance 60000000

using namespace std;

long int speed = 0;
int primes = 0;
int days, hours;
long int fuel;
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}


int main() {

    cin >> fuel;
    while(primes < 10) {

        if(isPrime(fuel)) {
            speed += fuel;
            primes++;
        }
        fuel++;
    }

    cout << speed << " km/h" << endl;
    cout << distance/speed <<" h / " << ceil((distance/speed)/24) << " d"<< endl;
    return 0;
}