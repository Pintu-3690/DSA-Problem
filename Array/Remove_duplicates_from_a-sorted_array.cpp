#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int duplicate(vector<int>&arr) {
        if (arr.empty()) return 0;
        sort(arr.begin(),arr.end());
        int i = 0;

        for ( int j  =1; j<arr.size();j++) {
            if ( arr[j]!=arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }
        return i+1;
    }
};
int main() {
    Solution s;
    vector<int> arr = {4, 7, 8, 9, 3, 5, 4, 5, 7, 8, 9};

    int newLength = s.duplicate(arr);

    cout << "New length: " << newLength << "\nUnique elements: ";
    for (int k = 0; k < newLength; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}