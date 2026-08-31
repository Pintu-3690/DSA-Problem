//
// Created by spider on 31-08-2026.
//
#include <iostream>
using namespace std;
int main() {

    int arr[] = { 1,2,3,4,5,6,7,8,9};
    //target = 6
    int target = 9;
    int n = sizeof(arr)/sizeof(arr[0]);

    for ( int i = 0; i< n; i++) {
        if ( arr[i] == target  ) {
            cout<<"target : "<<i;
        }
    }

    return 0;
}