/*

    ==> Largest Element in Array <==

Question Link:- https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array A[] of size n. The task is to find the largest element in it.

Example 1:
    Input:
        n = 5
        A[] = {1, 8, 7, 56, 90}
    Output:
        90
    Explanation:
    The largest element of given array is 90.
    

Example 2:
    Input:
        n = 7
        A[] = {1, 2, 0, 3, 2, 4, 5}
    Output:
        5
    Explanation:
    The largest element of given array is 5.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largest(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

int main () {

    vector<int> arr = { 1, 2, 0, 3, 2, 4, 5 };

    cout << largest(arr, 7);

    return 0;

}
