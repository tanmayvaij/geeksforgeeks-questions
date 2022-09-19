/*

    ==> Print Elements of Array <==

Question Link:- https://practice.geeksforgeeks.org/problems/print-elements-of-array4910/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array Arr of size N, print all its elements.

Example 1:
    Input:
        N = 5
        Arr[] = {1, 2, 3, 4, 5}
    Output: 1 2 3 4 5

Example 2:
    Input:
        N = 4
        Arr[] = {2, 3, 5, 5}
    Output: 2 3 5 5

*/

#include <iostream>
using namespace std;

void printArray( int arr [], int n ) {
    for ( int i = 0; i < n; i++ ) cout << arr[i] << " ";
}

int main () {

    int arr [] = { 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(n);

    printArray(arr, n);

    return 0;

}
