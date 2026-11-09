#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string Longprefix(vector<string>&arr) {
    sort(arr.begin(),arr.end());
    string first = arr.front();
    string last = arr.back();
    int minLng = min(first.length(),last.length());
    int i = 0;
    while (i < minLng && first[i]==last[i]) {
        i++;
    }
    return first.substr(0,i);
}

int main() {
    vector<string> arr = {"Spiderman", "Spidergo", "Spiderrun", "Spiderwalk"};
    cout <<Longprefix(arr)<<endl;
    return 0;
}