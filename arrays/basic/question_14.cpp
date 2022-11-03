/*

    ==> Number of occurrence <==

Question Link:- https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example 1:
    Input:
        N = 7, X = 2
        Arr[] = {1, 1, 2, 2, 2, 2, 3}
    Output: 4
    Explanation: 2 occurs 4 times in the
    given array.

Example 2:
    Input:
        N = 7, X = 4
        Arr[] = {1, 1, 2, 2, 2, 2, 3}
    Output: 0
    Explanation: 4 is not present in the
    given array.

*/

#include <iostream>
using namespace std;

int count(int arr[], int n, int x) {
	int c = 0;
	for ( int i = 0; i < n; i++ ) 
	    if ( arr[i] == x ) c++;
    return c;
}

int main () {

    int arr[] = {1, 1, 2, 2, 2, 2, 3};

    cout << count(arr, 7, 2);

    return 0;

}
