/*
    ==> Print alternate elements of an array <==

You are given an array A of size N. You need to print elements of A in 
alternate order (starting from index 0).

Example 1:
    Input:
        N = 4
        A[] = {1, 2, 3, 4}
    Output:
        1 3

Example 2:
    Input:
        N = 5
        A[] = {1, 2, 3, 4, 5}
    Output:
        1 3 5

*/

#include <iostream>
using namespace std;

void printAlternate( int arr [], int n ) {
    for ( int i = 0; i < n; i+=2 ) cout << arr[i] << " ";
}

int main () {

    int arr [] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printAlternate(arr, n);

    return 0;

}
