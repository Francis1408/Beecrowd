#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;

int main() {

    vector <float> tabela;

    tabela.push_back(4.0);
    tabela.push_back(4.5);
    tabela.push_back(5.0);
    tabela.push_back(2.0);
    tabela.push_back(1.5);

    int num_product;
    int qtd;
    float total;

    cin >> num_product >> qtd;

    total = tabela[num_product-1]*qtd;

    cout << fixed << showpoint;
    cout << setprecision(2); 
    cout <<"Total: R$ "<< total << endl;


    return 0;

}