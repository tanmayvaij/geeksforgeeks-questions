/*

    ==> Second Largest <==

Question Link:- https://practice.geeksforgeeks.org/problems/second-largest3735/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array Arr of size N, print second largest element from an array.

Example 1:
    Input: 
        N = 6
        Arr[] = {12, 35, 1, 10, 34, 1}
    Output: 34
    Explanation: The largest element of the 
    array is 35 and the second largest element
    is 34.

Example 2:
    Input: 
        N = 3
        Arr[] = {10, 5, 10}
    Output: 5
    Explanation: The largest element of 
    the array is 10 and the second 
    largest element is 5.

*/

#include <iostream>
#include <algorithm>
using namespace std;

int print2Largest(int arr[], int n) {
    sort(arr, arr+n);
    int lnum = arr[n-1];
    if ( arr[0] == lnum ) return -1;
    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] == lnum ) return arr[i-1];
    }
    return arr[n-2];
}

int main () {

    int arr[] = { 10, 5, 10 };
    cout << print2Largest(arr, 3);

    return 0;

}
