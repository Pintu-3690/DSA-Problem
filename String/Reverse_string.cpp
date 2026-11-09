//Using Backward Traversal----------------------------
#include <iostream>

using namespace std;

string reverseString(string& s) {
    string res;
    int d = s.size()-1;
    for ( int i = d; i >=0;i--) {
        res+=s[i];
    }
    return res;
}


//two pointer ------------------------------------

string rev(string s) {
    int left = 0;
    int right =s.size()-1;
    while (left<right) {
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}

int main() {

    string s = "ABCDEFGHIJKLMNOPQRSTUVWX";
    string res = reverseString(s);
    cout<< " Using Backward Traversal =  "<<res<<endl;
    cout<< "two pointer =  "<<rev(s);

 return 0;
}
