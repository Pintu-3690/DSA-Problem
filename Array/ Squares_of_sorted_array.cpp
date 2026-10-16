#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Square(vector<int>&arr) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for ( int i = 0;i<n;i++) {
        arr[i]=arr[i]*arr[i];
    }


}
int main() {
    vector<int>arr={1,4,9,6,7,3};
    Square(arr);
    for (int n : arr) {
        cout<<n<<" ";
    }

    return 0;
}