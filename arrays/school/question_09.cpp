/*

    ==> C++ Array (Print an Element) <==

Question Link:- https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array A[] of N integers and an index Key. Your task 
is to print the element present at index key in the array.

Example 1:
    Input:
        5 2
        10 20 30 40 50
    Output:
        30
 

Example 2:
    Input:
        7 4
        10 20 30 40 50 60 70
    Output:
        50

*/

#include <iostream>
using namespace std;

int findElementAtIndex( int arr [], int n, int key ) {
    return arr[key];
}

int main () {

    int arr [] = { 10, 20, 30, 40, 50, 60, 70 };
    int n = sizeof(arr) / sizeof(int);

    cout << findElementAtIndex(arr, n, 4);

    return 0;

}
