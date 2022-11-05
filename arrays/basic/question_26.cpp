/*

    ==> Find the smallest and second smallest element in an array <==

Given an array of integers, your task is to find the smallest and second smallest 
element in the array. If smallest and second smallest do not exist, print -1.

Example 1:
    Input :
        5
        2 4 3 5 6
    Output :
        2 3 
    Explanation: 
    2 and 3 are respectively the smallest 
    and second smallest elements in the array.

Example 2:
    Input :
        6
        1 2 1 3 6 7
    Output :
        1 2 
    Explanation: 
    1 and 2 are respectively the smallest 
    and second smallest elements in the array.

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n) {
    set<int> s;
    sort(a, a+n);
    for ( int n: a ) s.insert(n);
    return { s[0], s[1] };
}

int main () {

    int arr[] = { 1, 2, 1, 3, 6, 7 };
    vector<int> ans = minAnd2ndMin(arr, 6);

    return 0;
}