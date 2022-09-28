/*

    ==> Missing number in array <==

Question Link:- https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions

Given an array of size N-1 such that it only contains distinct integers 
in the range of 1 to N. Find the missing element.

Example 1:
    Input:
        N = 5
        A[] = {1,2,3,5}
    Output: 4

Example 2:
    Input:
        N = 10
        A[] = {6,1,2,8,3,4,7,10,5}
    Output: 9

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MissingNumber(vector<int>& array, int n) {
    sort(array.begin(), array.end());
    for ( int i = 0; i < n; i++ ) if ( array[i] != i+1 ) return i+1;
    return n;
}

int main () {

    vector<int> array = {1,2,3,5};

    cout << MissingNumber(array, 4) << endl;

    return 0;

}
