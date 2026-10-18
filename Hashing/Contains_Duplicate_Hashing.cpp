#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
bool Duplicate(vector<int>&arr) {
    int n = arr.size();
    unordered_set<int>s;
    for ( int i = 0; i<n;i++) {
        if (s.find(arr[i])!= s.end() ){
            return true;
        }
        s.insert(arr[i]);

    }
    return false;
}

int main() {
    vector<int>arr={5,7,9,3,6,10,4,5,3,7};
    cout<<( Duplicate(arr) ? "true" : "false")<<endl;

    return 0;
}