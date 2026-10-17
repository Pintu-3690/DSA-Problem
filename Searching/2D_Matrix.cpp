#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool Matrix(vector<vector<int>>&arr,int x) {
    int n = arr.size();
    int m = arr[0].size();
    for ( int i = 0; i<n;i++) {
        for ( int j = 0; j<m;j++) {
            if ( arr[i][j]==x) {
                return true;
            }
        }
    }
    return false;
}
int main() {

    vector<vector<int>> arr = {
        {1, 5, 9},
        {14, 20, 21},
        {30, 34, 43}
    };
    int x = 4;

    cout<<( Matrix(arr,x) ? "true": "false")<<endl;
    return 0;
}