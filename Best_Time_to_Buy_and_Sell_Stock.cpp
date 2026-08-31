//
// Created by spider on 31-08-2026.
//
#include <iostream>
#include <climits>
using namespace std;
int main() {


int prices[6] = {7,1,5,3,6,4};
    int min_price = INT_MAX;
    int max_profit = 0;
    for ( int price : prices) {
        if ( price < min_price) {
            min_price = price;
        }
        else if ( price - min_price > max_profit) {
            max_profit = price - min_price;
        }
    }

    cout<<"Max Price : "<< " "<<max_profit;

    return 0;
}