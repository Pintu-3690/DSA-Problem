//
// Created by spider on 27-09-2026.
//
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[]={1,4,78,96,35,4,25,9,55,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool swwap;
   for ( int i = 0; i<n-1;i++) {
       swwap = false;
       for ( int j = 0; j <= n-1-i;j++) {
           if ( arr[j] > arr[j+1]) {
               swap(arr[j],arr[j+1]);
               swwap = true;
           }

       }
       if (!swwap) {
           break;
       }


   }
    for ( int i = 0; i <=n-1;i++) {
        cout<<arr[i]<<"  ";
    }


    return 0;
}