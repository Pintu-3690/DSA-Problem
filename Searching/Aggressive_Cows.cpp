#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool check(vector<int>&arr,int k,int dist) {
    int cnt = 1;
    int pre = arr[0];
    for ( int i = 1; i<arr.size();i++) {
        if ( arr[i]-pre >= dist) {
            pre = arr[i];
            cnt++;
        }
    }
    return (cnt >= k);
}
int Aggressive(vector<int>&arr,int k) {
    sort(arr.begin(),arr.end());
    int res = 0;
    int low = 1;
    int high = arr.back()-arr[0];
    while ( low <= high) {
        int mid = low + (high - low)/2;
        if ( check(arr,k,mid)) {
            res = mid;
            low = mid +1;
        }
        else {
            high = mid - 1;
        }
    }
    return res;
}
int main() {
    vector<int>arr={5,7,9,8,1,3,6};
    int k = 3;
    cout<<"Aggresive : "<<Aggressive(arr,k);
    return 0;
}