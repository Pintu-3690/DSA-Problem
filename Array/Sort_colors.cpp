#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Colour(vector<int>&arr) {
    sort(arr.begin(),arr.end());
}
int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2};

    Colour(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}