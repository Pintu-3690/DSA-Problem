#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool twoSum(vector<int>&arr,int target) {
    for ( int i =0;i<arr.size();i++) {
        for ( int j = i+1;j<arr.size();j++) {
            if ( arr[i]+arr[j]==target) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    vector<int>arr={1,4,5,6,9,7,2,3};
    int target = 11;
    if ( twoSum(arr,target)) {
        cout << "true";
    }
    else
        cout<<"false";
    return 0;
}