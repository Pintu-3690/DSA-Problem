#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
vector<int>TwoArray(vector<int>&a,vector<int>&b) {

    vector<int>R;
    unordered_map<int,int>s;
    for ( int i = 0; i<a.size();i++) {
        for ( int j = 0;j<b.size();j++) {
            if ( a[i]==b[j] && s.count(a[i])==0) {
                s.insert({a[i],1});
                R.push_back(a[i]);
            }
        }
    }
    return R;

}

int main() {
    vector<int>a={4,5,6,1,5,9};
    vector<int>b={3,1,2,8,5,4};
   vector<int>re = TwoArray(a,b);
    for ( int i =0; i< re.size();i++) {
        cout<<re[i]<<"  ";
    }
    return 0;
}