/*

    ==> Binary Array Sorting <==

Question Link:- https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.

Example 1:
    Input: 
        5
        1 0 1 1 0
    Output: 
        0 0 1 1 1
    Explanation: 
    After arranging the elements in 
    increasing order, elements will be as 
    0 0 1 1 1.

Example 2:
    Input:
        10
        1 0 1 1 1 1 1 0 0 0
    Output: 
        0 0 0 0 1 1 1 1 1 1
    Explanation: 
    After arranging the elements in 
    increasing order, elements will be 
    0 0 0 0 1 1 1 1 1 1.

*/

#include <iostream>
#include <algorithm>
using namespace std;

void binSort(int A[], int N) {
    sort(A, A+N);
    for ( int i = 0; i < N; i++ ) cout << A[i] << " ";
    cout << endl;
}

int main() {

    int A[] = { 1, 0, 1, 1, 1, 1, 1, 0, 0, 0 };
    binSort(A, 10);

    return 0;

}
