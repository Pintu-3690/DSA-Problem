

// Created by spider on 31-08-2026.
//
#include <iostream>
using namespace std;
int main() {

    int arr[]={12, 35, 1, 10, 34, 1};
    int largest = -1;
    int secLargest = -1;
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n;i++) {
        if ( arr[i]>largest) {
            largest = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if ( arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }
    cout << "Second Largest : " << secLargest;

    return 0;
}