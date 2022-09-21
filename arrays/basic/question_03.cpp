/*

    ==> Cyclically rotate an array by one <==

Question Link:- https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array, rotate the array by one position in clock-wise direction.

Example 1:
    Input:
        N = 5
        A[] = {1, 2, 3, 4, 5}
    Output:
        5 1 2 3 4
 

Example 2:
    Input:
        N = 8
        A[] = {9, 8, 7, 6, 4, 2, 1, 3}
    Output:
        3 9 8 7 6 4 2 1

*/

#include <iostream>
using namespace std;

void printArray( int arr [], int n ) {
    for ( int i = 0; i < n; i++ ) cout << arr[i] << " ";
    cout << endl;
}

void rotate(int arr [], int n) {
    int temp = arr[n-1];
    for ( int i = n-1; i >= 1; i-- ) arr[i] = arr[i-1];
    arr[0] = temp;
}

int main () {

    int arr [] = { 9, 8, 7, 6, 4, 2, 1, 3 };

    rotate(arr, 8);
    printArray(arr, 8);

    return 0;

}
