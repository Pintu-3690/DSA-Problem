#include<iostream>
#include<vector>
#include <algorithm>
#include <numeric>
using namespace std;
int Capacity(vector<int>&arr,int d) {
    int left = *max_element(arr.begin(),arr.end());
    int right = accumulate(arr.begin(),arr.end(),0);
    while (left < right) {
        int mid = left + ( right - left)/2;
        int days = 1;
        int weight = 0;
        for (int i = 0; i< arr.size();i++) {
            if ( arr[i]+weight > mid) {
                days++;
                weight = 0;
            }
            weight+=arr[i];
        }
        if ( days > d) {
            left = mid +1;
        }
        else {
            right = mid;
        }
        return left;
    }
}
int main() {
    vector<int>arr={5,8,6,7,11};
    int d = 4;
    cout << "Capacity : "<<Capacity(arr,d)<<endl;

    return 0;
}