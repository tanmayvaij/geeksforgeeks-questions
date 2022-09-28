/*

    ==> Subarray with given sum <==

Question Link:- https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions

Given an unsorted array A of size N that contains only non-negative integers, 
find a continuous sub-array which adds to a given number S.

In case of multiple subarrays, return the subarray which comes first on moving from left to right.

Example 1:
    Input:
        N = 5, S = 12
        A[] = {1,2,3,7,5}
    Output: 2 4
    Explanation: The sum of elements 
    from 2nd position to 4th position 
    is 12.

Example 2:
    Input:
        N = 10, S = 15
        A[] = {1,2,3,4,5,6,7,8,9,10}
    Output: 1 5
    Explanation: The sum of elements 
    from 1st position to 5th position
    is 15.

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector( vector<int> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> subarraySum(int arr[], int n, long long s) {
    
    int st = 0, en = 0; 
    long long sum = arr[0];
    
    if ( s == 0 ) return { -1 };

    while ( true ) {

        if ( sum < s && en < n-1 ) {
            en++;
            sum += arr[en];
        }

        else if ( sum > s && st < n-1 ) {
            sum -= arr[st];
            st++;
        }

        else if ( sum == s ) return { st + 1, en + 1 };

        else break;
        
    }

    return { -1 };

}

int main () {

    int arr[] = {1, 2, 3, 7, 5};

    printVector(subarraySum(arr, 5, 12));

    return 0;

}
