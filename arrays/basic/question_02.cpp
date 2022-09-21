/*

    ==> Find triplets with zero sum <==

Question Link:- https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

Example 1:
    Input: n = 5, arr[] = {0, -1, 2, -3, 1}
    Output: 1
    Explanation: 0, -1 and 1 forms a triplet
    with sum equal to 0.

Example 2:
    Input: n = 3, arr[] = {1, 2, 3}
    Output: 0
    Explanation: No triplet with zero sum exists. 

*/

#include <iostream>
#include <algorithm>
using namespace std;

bool findTriplets(int arr[], int n) {

    sort( arr, arr + n ); 

    for ( int i = 0; i < n; i++ ) {

        int s = 0, e = n - 1;

        while (s < e) {

            if ( i == s ) s++;
            if ( i == e ) e--;

            int sum = arr[i] + arr[s] + arr[e];

            if ( sum == 0 ) return true;        
            if ( sum < 0 ) s++;
            if ( sum > 0 ) e--;

        }
        
    }

    return false;

}

int main () {

    int arr[] = { 1, 2, 3 };

    cout << findTriplets(arr, 3);

    return 0;

}
