/*

    ==> Rotating an Array <== 

Question Link:- https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array of size N. The task is to rotate array by D elements where D ≤ N.

Example 1:
    Input:
        N = 7
        Arr[] = {1, 2, 3, 4, 5, 6, 7}
        D = 2
    Output: 3 4 5 6 7 1 2
    Explanation: 
    Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
    Rotate by 2: [3, 4, 5, 6, 7, 1, 2]

Example 2:
    Input:
        N = 4
        Arr[] = {1, 3, 4, 2}
        D = 3
    Output: 2 1 3 4

*/

#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr [], int n) {
    for ( int i = 0; i < n; i++ ) cout << arr[i] << "";
    cout << endl;
}

void leftRotate(int arr[], int n, int d) {

    vector<int> tempar;

    for ( int i = d; i < n; i++ ) tempar.push_back(arr[i]);
    for ( int i = 0; i < d; i++ ) tempar.push_back(arr[i]);
    for ( int i = 0; i < n; i++ ) arr[i] = tempar[i];

}

int main () {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    leftRotate(arr, 7, 2);

    printArray(arr, 7);

    return 0;

}
