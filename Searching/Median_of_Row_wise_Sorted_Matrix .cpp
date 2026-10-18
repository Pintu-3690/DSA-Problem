#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int median(vector<vector<int>>&Matrix) {
    vector<int>arr;
    for ( int i = 0; i< Matrix.size();i++) {
        for (int j =0;j<Matrix[0].size();j++) {
            arr.push_back(Matrix[i][j]);
        }
    }
    sort( arr.begin(),arr.end());
    int mid = arr.size()/2;
    return arr[mid];
}
int main() {
    vector<vector<int>> matrix =
    {{1, 3, 5},
     {2, 6, 9},
     {3, 6, 9}};
    cout << median(matrix) << endl;
    return 0;
}