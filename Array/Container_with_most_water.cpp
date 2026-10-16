#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int container(vector<int>&arr) {
    int n =arr.size();
    int res = 0;
    int amunt;
    for ( int i = 0;i<n;i++) {
        for ( int j = i+1;j<n;j++) {
            amunt = min(arr[i],arr[j])*(j-i);
           res = max(amunt,res);
        }
    }
    return res;
}
int main() {
    vector<int>arr={4,5,7,8,3,9,6,1,2};
    cout<<container(arr);
    return 0;
}