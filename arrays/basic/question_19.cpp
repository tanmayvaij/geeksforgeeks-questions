/*

    ==> Searching a number <==

Question Link:- https://practice.geeksforgeeks.org/problems/searching-a-number0324/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array Arr of N elements and a integer K. Your task is to return the 
position of first occurence of K in the given array.
Note: Position of first element is considered as 1.

Example 1:
    Input:
        N = 5, K = 16
        Arr[] = {9, 7, 2, 16, 4}
    Output: 4
    Explanation: K = 16 is found in the
    given array at position 4.

Example 2:
    Input:
        N = 7, K = 98
        Arr[] = {1, 22, 57, 47, 34, 18, 66}
    Output: -1
    Explanation: K = 98 isn't found in
    the given array.

*/

#include <iostream>
using namespace std;

int search(int arr[], int n, int k) {
	int l = 0, r = n - 1;
    while ( l <= r ) {
        int m = (l + r) / 2;
        if ( arr[m] == k ) return m+1;
        if ( arr[m] < k ) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main () {

    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << search(arr, 9, 4);

    return 0;

}
