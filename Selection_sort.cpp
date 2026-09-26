//
// Created by spider on 27-09-2026.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {96,5,6,11,25,74,15,36,69};
    int n = sizeof(arr)/sizeof(arr[0]);
    for ( int i = 0; i<=n-1;i++) {
        int min = i;
        for ( int j = i+1;j<n;j++) {
            if ( arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min!=i) {
        swap(arr[i],arr[min]);
        }
    }


    for ( int i = 0;i<=n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}