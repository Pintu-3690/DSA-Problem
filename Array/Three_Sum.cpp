#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool threeSum(vector<int>&arr,int target) {
    int n = arr.size();
    for ( int i = 0;i<n;i++) {
        for ( int j = i+1;i<n;i++) {
            for ( int k = j+1;k<n;k++) {
                if ( arr[i]+arr[j]+arr[k]==target) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    vector<int>arr={1,2,3,4,5,6,7,8,9,10,11,12};
    int target = 45;
    if ( threeSum(arr,target)) {
        cout<<"true";
    }
    else cout<<"false";
    return 0;
}