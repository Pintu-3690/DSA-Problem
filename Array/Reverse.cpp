//Reverse
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArray(vector<int>&arr) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int left = 0;
    int right = n-1;
    while ( left < right) {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main() {
vector<int>arr={1,8,9,6,7,5,3,6,2,8};
    cout<<"reverse is : "<<endl;
    reverseArray(arr) ;
       for ( int n : arr) {
           cout<<n<<" ";
       }

    return 0;
}