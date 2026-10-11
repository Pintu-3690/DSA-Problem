#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int>&arr,int k) {
    int n = arr.size();
    if (n==0)return;
    k %=n;
    if (k==0)return;
   reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.begin());
    reverse(arr.begin()+k,arr.end());
}
int main() {
    vector<int>arr={5,8,9,6,7,4,3,1,20};
    int k = 2;
    rotate(arr,k);
    for ( int j : arr) {
        cout<<j<<" ";
    }

    return 0;
}