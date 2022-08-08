// PROBLEM 1002 - AREA OF A CIRCLE

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double n = 3.14159;
  double R;

  cin >> R;
  cout << fixed;
  cout << setprecision(4) << "A=" << n*(R*R) << endl; 

  return 0;
}