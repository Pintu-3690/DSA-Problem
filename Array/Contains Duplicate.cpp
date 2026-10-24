//
// Created by spider on 30-08-2026.
//
#include <iostream>
using namespace std;
int main() {
    int arr[5]={2,4,8,7,9};
    bool duplicate = false;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1;i++ ) {
        for (int j=i+1;j<n;j++) {
            if ( arr[i] == arr[j]) {
              duplicate = true;
                break;
            }

        }
        if (duplicate) break;
    }
    if (duplicate) {
        cout<<"True"<<endl;
    }
    else cout<<"False"<<endl;


    return 0;
}