//
// Created by spider on 06-09-2026.
//
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int arr[] = { 11, 11, 52, 85, 20, 20, 20, 20, 56, 89, 11 };
    int target = 11;

    int elementCount = std::count(std::begin(arr), std::end(arr), target);

    cout << " target : " << target << " count : " << elementCount << endl;

    return 0;
}