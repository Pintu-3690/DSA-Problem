
#include <iostream>
#include <vector>
using namespace std;

vector<int> find(vector<int>& arr, int target) {
    int first = -1;
    int last = -1;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    return {first, last};
}

int main() {
    vector<int> arr = {2, 5, 7, 8, 6, 4, 4, 5, 7};
    int x = 5;

    vector<int> result = find(arr, x);

    cout << "First occurrence: " << result[0] << endl;
    cout << "Last occurrence: " << result[1] << endl;

    return 0;
}
