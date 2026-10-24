//
// Created by spider on 26-09-2026.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int arr[]={4,8,9,66,5,7,89,7,5,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int target =4;
    int left = 0;
    int right = n-1;
    bool found = false;

    while ( left <= right) {
        int mid = left + ( right - left)/2;
        if (arr[mid] == target ) {
            cout<<"found index : "<<mid;
            found = true;
            break;

        }
        else if ( arr[mid] < target) {
            left = mid+1;
        }
        else if ( arr[mid] > target) {
            right = mid -1;
        }
    }
    if (!found)
        cout<<"Invalid";

    return 0;
}
