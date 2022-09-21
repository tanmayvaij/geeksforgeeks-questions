/* 

    ==> Binary Search <==

Question Link:- https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given a sorted array of size N and an integer K, find the position 
at which K is present in the array using binary search.

Example 1:
    Input:
        N = 5
        arr[] = {1 2 3 4 5} 
        K = 4
    Output: 3
    Explanation: 4 appears at index 3.

Example 2:
    Input:
        N = 5
        arr[] = {11 22 33 44 55} 
        K = 445
    Output: -1
    Explanation: 445 is not present.

*/

#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k) {
    int s = 0, e = n-1;
    while ( s <= e ) {
        int m = (s + e) / 2;
        if ( arr[m] == k )
            return m;
        else if ( arr[m] > k )
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;
}

int main () {

    int arr[] = { 1, 2, 3, 4, 5 }; 
    cout << binarysearch(arr, 5, 4);

    return 0;

}
