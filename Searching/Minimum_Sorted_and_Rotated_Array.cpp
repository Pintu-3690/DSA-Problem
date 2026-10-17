#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int findMin(vector<int>&arr) {
    sort(arr.begin(),arr.end());

    return arr[0];

}
int main() {
    vector<int>arr={5,7,9,3,4,};
    cout<<findMin(arr);
    return 0;
}