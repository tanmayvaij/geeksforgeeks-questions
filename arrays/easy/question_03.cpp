/*

    ==> Sort an array of 0s, 1s and 2s <==

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

Example 1:
    Input: 
        N = 5
        arr[]= {0 2 1 2 0}
    Output:
        0 0 1 2 2
    Explanation:
    0s 1s and 2s are segregated 
    into ascending order.

Example 2:
    Input: 
        N = 3
        arr[] = {0 1 0}
    Output:
        0 0 1
    Explanation:
    0s 1s and 2s are segregated 
    into ascending order.

*/

#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int a[], int n) {
    for ( int i = 0; i < n; i++ ) cout << a[i] << " ";
    cout << endl;
}

void sort012(int a[], int n) {
    sort(a, a+n);
    printArray(a, n);
}

int main () {

    int a[] = {0, 2, 1, 2, 0};

    sort012(a, 5);

    return 0;

}
