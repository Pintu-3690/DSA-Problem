//
// Created by spider on 06-09-2026.
//
#include<iostream>
using namespace std;
int main() {

    // Binary String

    string binary = " 10101011101000";
    for ( size_t i = 0; i < binary.length()-1;i++) {
        if ( binary[i] != '1' && binary[i] != '0') {
            cout <<"Binary";
        }

        else
            cout<<" Not Binary";
    }


    return 0;
}