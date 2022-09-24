/*

    ==> Find minimum and maximum element in an array <==

Question Link:- https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array A of size N of integers. Your task is to find the minimum 
and maximum elements in the array.

Example 1:
    Input:
        N = 6
        A[] = {3, 2, 1, 56, 10000, 167}
    Output:
        min = 1, max =  10000
 

Example 2:
    Input:
        N = 5
        A[]  = {1, 345, 234, 21, 56789}
    Output:
        min = 1, max = 56789

*/

#include <iostream>
#include <algorithm>
using namespace std;

pair<long long, long long> getMinMax(long long arr[], int n) {
    sort(arr, arr+n);
    return make_pair(arr[0], arr[n-1]);
}

int main () {

    long long arr[] = { 3, 2, 1, 56, 10000, 167 };

    pair<long long, long long> ans = getMinMax(arr, 6);

    cout << ans.first << " " << ans.second << endl;

    return 0;

}
