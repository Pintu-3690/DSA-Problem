#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
bool TwoSum(vector<int>&arr,int target) {
    int n = arr.size();
    unordered_set<int>s;
    for ( int i = 0; i<n; i++) {
        int complement = target - arr[i];
        if ( s.find(complement) != s.end()) {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main() {
    vector<int>arr={5,7,9,3,6,1,4,2};
    int target = 15;
  if ( TwoSum(arr,target)) {
      cout<<"true";
  }
    else {
        cout << "false";
    }
    return 0;
}