//Third largest element in an array

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getThirdLargest(vector<int> &arr) {
    int n = arr.size();

    sort(arr.begin(),arr.end());
    for ( int i = n-3;i>=0;i--) {
        if ( arr[i]!=arr[n-1] && arr[i]!=arr[i-2]) {
            return arr[i];
        }
        else return -1;
    }
}
int main() {
    vector<int>arr = { 8,5,6,9,7,1,4,2,3,5};
    cout<<getThirdLargest(arr);
    return 0;
}