/*

    ==> Check if two arrays are equal or not <== 

Question Link:- https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given two arrays A and B of equal size N, the task is to find if given 
arrays are equal or not. Two arrays are said to be equal if both of them 
contain same set of elements, arrangements (or permutation) of elements 
may be different though.
Note : If there are repetitions, then counts of repeated elements must 
also be same for two array to be equal.

Example 1:
    Input:
        N = 5
        A[] = {1,2,5,4,0}
        B[] = {2,4,5,0,1}
    Output: 1
    Explanation: Both the array can be 
    rearranged to {0,1,2,4,5}

Example 2:
    Input:
        N = 3
        A[] = {1,2,5}
        B[] = {2,4,15}
    Output: 0
    Explanation: A[] and B[] have only 
    one common value.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<long long int> A, vector<long long int> B, int N) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for ( int i = 0; i < N; i++ )
        if ( A[i] != B[i] ) return false;
    return true;
}

int main () {

    vector<long long int> A = {1,2,5,4,0};
    vector<long long int> B = {2,4,5,0,1};

    cout << check(A, B, 5);

    return 0;

}
