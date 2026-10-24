#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int Majority(vector<int>&arr) {
int n= arr.size();

    for ( int i = 0; i<n;i++) {
        int count =0;
        for ( int j = 0; j<n;j++) {
            if ( arr[i]==arr[j]) {
                count++;

            }

        }
        if ( count > n/2) {
            return arr[i];
        }
    }
    return -1;
}
int main() {
    vector<int>arr={ 1,2,2,2,2,5,};
    cout<<Majority(arr);
    return 0;
}