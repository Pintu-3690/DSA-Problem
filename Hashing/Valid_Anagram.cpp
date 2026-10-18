#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool Anagram(string &s1 , string &s2) {
    if ( s1.length() != s2.length()) {
        return false;
    }
    unordered_map<char,int>count;
    for ( char ch : s1) {
        count[ch]+=1;
    }
    for (char c : s2) {
        count[c]-= 1;
    }
    for ( auto &pair : count) {
        if ( pair.second !=0) {
            return false;
        }
    }
    return true;

}

int main() {
    string s1 = "good";
    string s2 = "dogo";
    if ( Anagram(s1,s2)) {
        cout<<"true";
    }
    else {
        cout <<"false";
    }
    return 0;
}