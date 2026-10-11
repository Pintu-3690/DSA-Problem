#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void Allzero( vector<int>&arr) {
        int last = 0;
        for ( int i =0;i< arr.size();i++) {
            if ( arr[i]!=0) {
                swap(arr[last],arr[i]);
                last++;
            }
        }

    }
};

int main() {
    Solution solu;
    vector<int>arr={4,0,0,8,0,5,2,7};
    solu.Allzero(arr);
    for ( int j:arr) {
        cout<<j<<" ";
    }
    return 0;
}