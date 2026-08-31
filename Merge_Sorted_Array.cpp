//
// Created by spider on 31-08-2026.
//
#include <iostream>
using namespace std;
int main() {
    int nums1[]= {1,2,3,0,0,0};
    int  nums2[] = {2,5,6};

    int  n = sizeof(nums1)/sizeof(nums1[0]);
    int m = sizeof(nums2)/sizeof(nums2[0]);

    int p = n -1;
    int q = m -1;
    int r = n + m -1;
    for ( ;r>=0;r-- ) {
        if ( m < 0) {
            break;
        }
        if ( n >= 0 && nums1[p] > nums2[q]) {
            nums1[r]=nums1[p];
        }
        else {
            nums1[r]=nums2[q];
        }
    }
    for ( r = 0; r < m+n-1;r++) {
        cout<<r<<" ";
    }


    return 0;
}