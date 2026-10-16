#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Merge(vector<int>&arr1,vector<int>&arr2) {
    int n = arr1.size();
    int m = arr2.size();
    //temporary arr
    vector<int>merge(m+n);
    for (int i = 0;i<n;i++) {
        merge[i]=arr1[i];
    }
    for (int j = 0;j<m;j++) {
        merge[n+j]=arr2[j];
    }
    sort(merge.begin(),merge.end());
    for ( int i = 0;i<n;i++) {
        arr1[i]=merge[i];
    }
    for (int j = 0;j<m;j++) {
        arr2[j]=merge[n+j];
    }

}
int main() {
    vector<int>arr1={1,8,6,7};
    vector<int>arr2={2,4,5,3,9};
    Merge(arr1,arr2);
    for (int n : arr1) {
        cout<<n<<" ";
    }
    cout<<endl;
    for (int m : arr2) {
        cout<<m<<" ";
    }
    return 0;
}