//
// Created by spider on 06-09-2026.
//
#include <iostream>
using namespace std;
int main() {
    int arr[] = { 1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_val = arr[0];
    int max_val = arr[0];
    for ( int i = 1; i < n; i++) {
        if ( arr[i] < min_val) {
            min_val = arr[i];
        }
        if ( arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    cout <<  " min value : " << min_val<< endl;
    cout<< " max value : "<<max_val <<endl;

    return 0;
}