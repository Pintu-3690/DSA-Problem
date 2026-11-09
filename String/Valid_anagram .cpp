#include <algorithm>
#include <iostream>
using namespace std;
bool isAnagram(string &s1,string &s2) {
    if ( s1.length() != s2.length()) {
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if (s1==s2) {
        return true;
    }
}
int main() {

    string s1 ="bood";
    string s2 = "doob";
    cout<<isAnagram(s1,s2)<<endl;
}