//Second Largest Element

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for ( int i = n-2; i>=0;i--) {
        if (arr[i] != arr[n-1]) {
            return arr[i];
        }
        else return -1;
    }


}

int main(){
    vector<int>arr = { 8,5,6,9,7,1,4,2,3,5};
    cout<<getSecondLargest(arr);
    return 0;
}