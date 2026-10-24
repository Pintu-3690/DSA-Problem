//
// Created by spider on 31-08-2026.
//
#include<iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for ( int i = n-1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}