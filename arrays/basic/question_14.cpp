/*

    ==> Third largest element <==

Question Link:- https://practice.geeksforgeeks.org/problems/third-largest-element/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array of distinct elements. Find the third largest element in it.

Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because 
it is the 3 largest element in the array A.

Example 1:
    Input:
        N = 5
        A[] = {2,4,1,3,5}
    Output: 3

Example 2:
    Input:
        N = 2
        A[] = {10,2}
    Output: -1

*/

#include <iostream>
#include <algorithm>
using namespace std;

int thirdLargest(int arr[], int n) {
    sort(arr, arr+n);
    return arr[n-3];
}

int main () {

    int arr[] = { 2, 4, 1, 3, 5 };
    cout << thirdLargest(arr, 5);

    return 0;

}
