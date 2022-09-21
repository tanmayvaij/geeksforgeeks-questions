/*

    ==> Count of Smaller Elements <==

Question Link:- https://practice.geeksforgeeks.org/problems/count-of-smaller-elements5947/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an sorted array A of size N. Find number of elements 
which are less than or equal to given element X.

Example 1:
    Input:
        N = 6
        A[] = {1, 2, 4, 5, 8, 10}
        X = 9
    Output:
        5
 

Example 2:
    Input:
        N = 7
        A[] = {1, 2, 2, 2, 5, 7, 9}
        X = 2
    Output:
        4

*/

#include <iostream>
using namespace std;

int countOfElements( int arr [], int n, int x ) {
    int counter = 0;
    for ( int i = 0; i < n; i++ ) if ( arr[i] <= x ) counter++;
    return counter;
}

int main () {

    int arr [] = { 1, 2, 2, 2, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(n);

    cout << countOfElements(arr, n, 2);

    return 0;

}
