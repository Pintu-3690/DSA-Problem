//
// Created by spider on 29-08-2026.
//
#include <iostream>
using namespace std;
int main () {
int arr[5]={2,8,6,47,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    for ( int i = 0;i<n-1;i++) {
        bool swapval = false;
        for (int j=0;j<n-1;j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapval = true;
            }
    } if (!swapval) {
        break;
    }
    }
    for ( int i = 0; i<n;i++) {
        cout <<arr[i]<<" ";
    }


    return 0;
}