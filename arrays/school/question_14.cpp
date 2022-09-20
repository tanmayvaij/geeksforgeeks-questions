/*

    ==> Smaller and Larger <==

Question Link:- https://practice.geeksforgeeks.org/problems/smaller-and-larger4005/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given a sorted array Arr of size N and a value X, find the number of 
array elements less than or equal to X and elements more than or equal to X. 

Example 1:
    Input:
        N = 7, X = 0
        Arr[] = {1, 2, 8, 10, 11, 12, 19}
    Output: 0 7
    Explanation: There are no elements less or
    equal to 0 and 7 elements greater or equal
    to 0.

Example 2:
    Input:
        N = 7, X = 5
        Arr[] = {1, 2, 8, 10, 11, 12, 19}
    Output: 2 5
    Explanation: There are 2 elements less or
    equal to 5 and 5 elements greater or equal
    to 5.

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector( vector<int> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> getMoreAndLess(int arr[], int n, int x) {
    int less = 0, more = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] <= x ) less++;
        if ( arr[i] >= x ) more++; 
    }
    return { less, more };
}

int main () {

    int arr [] = { 1, 2, 8, 10, 11, 12, 19 };
    vector<int> ans = getMoreAndLess(arr, 7, 5);
    printVector(ans);

    return 0;

}
