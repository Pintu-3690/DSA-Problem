#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int koko(vector<int>&arr,int hour) {
    int left = 1;
    int right = *max_element(arr.begin(),arr.end());
    while ( left < right ) {
        int mid = left + ( right - left)/2;
        long long time = 0;
        for ( int h : arr) {
            time += ( h + mid -1)/mid;
        }
        if ( time <= hour) {
           right = mid;
        }
        else
            left = mid +1;
    }
    return left;
}
int main() {
    vector<int>arr={1,5,3,9,7,8,6};
    int k = 3;
    cout<<koko( arr,k)<<endl;

    return 0;
}