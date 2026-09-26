//
// Created by spider on 27-09-2026.
//
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,1,0,0,1,0,};
    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = n-1;
    for ( int i = 0; i<=n-1;i++) {
        if ( arr[i] == 1) {
            count++;
        }
    }
    cout<<count;
    return 0;
}