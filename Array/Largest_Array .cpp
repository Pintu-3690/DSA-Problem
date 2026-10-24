//
// Created by spider on 31-08-2026.
//
#include <iostream>
using namespace std;
int main () {

    int arr[]={1,8,7,56,90};
    int largest = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for ( int i = 0; i <n; i++) {
        if ( arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout <<"Largest : " << largest;

    return 0;
}