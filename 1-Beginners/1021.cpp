#include <iostream>

using namespace std;

int main(){

  float value;
  cin >> value;
  int n_100, n_50, n_20, n_10, n_5, n_2, 
      n_1, n_050, n_025, n_010, n_005, n_001; 

 // Calculating the amount of cash 
  n_100 = (int)value/100;
  value = value - 100*(n_100);

  n_50 = (int)value/50;
  value = value - 50*(n_50);

  n_20 = (int)value/20;
  value = value - 20*(n_20);

  n_10 = (int)value/10;
  value = value - 10*(n_10);

  n_5 = (int)value/5;
  value = value - 5*(n_5);

  n_2 = (int)value/2;
  value = value - 2*(n_2);

  n_1 = (int)value;
  value = value - 1*(n_1);

  value = (int)(value*100 + .5);

  // Calculating the amount of coins
  n_050 = (int)value/50;
  value = value - 50*(n_050);

  n_025 = (int)value/25;
  value = value - 25*(n_025);

  n_010 = (int)value/10;
  value = value - 10*(n_010);

  n_005 = (int)value/5;
  value = value - 5*(n_005);

  n_001 = (int)value;
  value = value - 1*(n_001);

  cout << "NOTAS:" << endl
       << n_100 << " nota(s) de R$ 100.00" << endl
       << n_50 << " nota(s) de R$ 50.00" << endl
       << n_20 << " nota(s) de R$ 20.00" << endl
       << n_10 << " nota(s) de R$ 10.00" << endl
       << n_5 << " nota(s) de R$ 5.00" << endl
       << n_2 << " nota(s) de R$ 2.00" << endl
       << "MOEDAS:" << endl
       << n_1 << " moeda(s) de R$ 1.00" << endl
       << n_050 << " moeda(s) de R$ 0.50" << endl
       << n_025 << " moeda(s) de R$ 0.25" << endl
       << n_010 << " moeda(s) de R$ 0.10" << endl
       << n_005 << " moeda(s) de R$ 0.05" << endl
       << n_001 << " moeda(s) de R$ 0.01" << endl;
 

  return 0;
}