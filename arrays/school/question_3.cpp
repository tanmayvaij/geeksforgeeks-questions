/*

    ==> Value equal to index value <==

Question Link:- https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions    

Given an array Arr of N positive integers. Your task is to find the elements 
whose value is equal to that of its index value ( Consider 1-based indexing ).

Example 1:
    Input: 
        N = 5
        Arr[] = {15, 2, 45, 12, 7}
    Output: 2
    Explanation: Only Arr[2] = 2 exists here.

Example 2:
    Input: 
        N = 1
        Arr[] = {1}
    Output: 1
    Explanation: Here Arr[1] = 1 exists.

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> valueEqualToIndex( int arr [], int n ) {

    vector<int> ans;

    for ( int i = 0; i < n; i++ )
        if ( arr[i] == i+1 ) ans.push_back(i+1);

    return ans;

}

int main () {

    int arr [] = { 15, 2, 45, 12, 7 };
    int n = sizeof(arr) / sizeof(n);

    vector<int> ans = valueEqualToIndex(arr, n);

    for ( int i = 0; i < ans.size(); i++ ) cout << ans[i] << " ";

    return 0;

}
