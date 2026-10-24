//
// Created by spider on 06-09-2026.
//
#include <iostream>
using namespace std;
int main() {

    //length

     string name = "Algorithm";
    cout << name.size();
cout<<endl;

    //two strings are same


    string a = "abcdef";
    string b = "abcdef";

    if ( a == b  ) {
        cout << "Same "<<endl;
    }
    else
        cout << "Not same";


    //Search a Character

    char target = 'd';
    int n = a.length();
    bool found  = false;
    for (size_t x = 0; x < n;x++) {
        if ( a[x]==target) {
            cout<< "found " <<x<<endl;
            found = true;
            break;
        }
    }
    if ( !found) {
        cout<<"not found";
    }


    // remove

    int del = 3;
    if ( del >= 0 && del <= a.length()) {
        a.erase(del,1);
    }
    cout <<a<<endl;

    //reverse
    int left = 0;
    int right = b.length()-1;
    while (left < right) {
        swap(b[left],b[right]);
        left ++;
        right--;
    }
    cout<<b<<endl;




    return 0;
}