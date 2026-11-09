#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string &s) {
    int left = 0;
    string cpy = s;
    int right = s.size()-1;
    while ( left<right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}
int main() {
    string s = "abba";
    cout<<isPalindrome(s);
    return 0;
}