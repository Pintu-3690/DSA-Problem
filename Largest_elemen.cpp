//
// Created by spider on 27-09-2026.
//
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int arr[]={14,54,87,96,25,36,12,98,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<"Largest : "<<arr[n-1]<<endl;;
    cout<<"Second Leargest : "<<arr[n-2];
    return 0;
}