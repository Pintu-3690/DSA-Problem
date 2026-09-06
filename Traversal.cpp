//
// Created by spider on 06-09-2026.
//

#include<iostream>
#include <iterator>
using namespace std;
int main() {

    // range

    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for ( int x : arr) {
        cout <<x<<" ";
    }
    cout << endl;

    for ( int &y : arr) {
        y *=2;
        cout <<y <<" ";
    }
    cout <<endl;


    //   . Iterators


    for ( auto a = begin(arr); a != end(arr);a++) {
        cout << *a <<" ";
    }
    cout <<endl;



    return 0;
}



