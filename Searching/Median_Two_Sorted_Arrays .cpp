#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
double  median(vector<int>&arr1,vector<int>&arr2) {
    vector<int>c(arr1.begin(),arr1.end());

    c.insert(c.end(),arr2.begin(),arr2.end());
    sort(c.begin(),c.end());
    int n = c.size();
    //even
    if ( n%2==0) {
        return (c[n/2]+c[n/2-1])/2.0;
    }
    //odd
    else {
        return c[n/2];
    }

}
int main() {
    vector<int>arr1={4,5,8,7,9,6};
    vector<int>arr2={2,7,8,6,4,5};
    cout<<"Median : "<<median(arr1,arr2);
    return 0;
}