/*

    ==> Balanced Array <==

Question Link:- https://practice.geeksforgeeks.org/problems/balanced-array07200720/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array of even size N, task is to find minimum value that can be added to an element 
so that array become balanced. An array is balanced if the sum of the left half of the array 
elements is equal to the sum of right half.

Example 1:
    Input:
        N = 4
        arr[] = {1, 5, 3, 2}
    Output: 1
    Explanation: 
    Sum of first 2 elements is 1 + 5  = 6, 
    Sum of last 2 elements is 3 + 2  = 5,
    To make the array balanced you can add 1.


Example 2:
    Input:
        N = 6
        arr[] = { 1, 2, 1, 2, 1, 3 }
    Output: 2
    Explanation:
    Sum of first 3 elements is 1 + 2 + 1 = 4, 
    Sum of last three elements is 2 + 1 + 3 = 6,
    To make the array balanced you can add 2.

*/

#include <iostream>
using namespace std;

int minValueToBalance(int arr[], int n) {
    int lsum=0, rsum=0;
    for ( int i = 0; i < n; i++ ) ( i < n/2 ) ? lsum += arr[i] : rsum += arr[i]; 
    return abs(lsum-rsum);
}

int main () {

    int arr[] = { 1, 2, 1, 2, 1, 3 };
    cout << minValueToBalance(arr, 6);
    return 0;

}
