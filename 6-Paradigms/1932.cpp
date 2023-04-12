#include <iostream>

using namespace std;


int calculateProfit(int *stock, int interest, int days) {

    int i;

    int maxProfit = 0;
    int highestSell, lowestPurchase;

    highestSell = lowestPurchase = stock[0];

    for(i = 1; i < days; i++) {

        if((highestSell > stock[i] && (highestSell - stock[i] >= interest)) || stock[i] < lowestPurchase ) {
            
            if(highestSell - lowestPurchase - interest > 0)
                maxProfit += highestSell - lowestPurchase - interest;
            
            highestSell = lowestPurchase = stock[i];
        }

        if(stock[i] > highestSell)
            highestSell = stock[i];
    }

    if(highestSell - lowestPurchase - interest > 0)
        maxProfit += highestSell - lowestPurchase - interest;

    return maxProfit;

}

int main() {

    int days;
    int interest;
    int profit;
    
    cin >> days >> interest;

    int stock[days];

    for(int i = 0; i < days; i++) cin >> stock[i];

    profit = calculateProfit(stock, interest, days);

    cout << profit << endl;

}