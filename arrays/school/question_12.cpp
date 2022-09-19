/*

    ==> Swap kth elements <==

Question Link:- https://practice.geeksforgeeks.org/problems/swap-kth-elements5500/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array Arr of size N, swap the Kth element from beginning with Kth element from end.

Example 1:
    Input:
        N = 8, K = 3
        Arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
    Output: 1 2 6 4 5 3 7 8
    Explanation: Kth element from beginning is
    3 and from end is 6.

Example 2:
    Input:
        N = 5, K = 2
        Arr[] = {5, 3, 6, 1, 2}
    Output: 5 1 6 3 2
    Explanation: Kth element from beginning is
    3 and from end is 1.

*/

#include <iostream>
using namespace std;

void printArray( int arr [], int n ) {
    for ( int i = 0; i < n; i++ ) cout << arr[i] << " ";
    cout << endl;
}

void swapKth(int *arr, int n, int k) {
    int temp = arr[k-1];
    arr[k-1] = arr[n-k];
    arr[n-k] = temp;
}

int main () {

    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8};
    swapKth(arr, 8, 3);
    printArray(arr, 8);

    return 0;

}
