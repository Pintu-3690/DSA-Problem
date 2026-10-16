#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int missing(vector<int>&arr) {
        int n = arr.size();

        int exptSum = n*(n+1)/2;
        int actulSum = 0;
        for ( int sum : arr) {
            actulSum += sum;
        }
        return exptSum - actulSum;
    }


    };