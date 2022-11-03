/*

    ==> Kth smallest element <==

Question Link:- https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions

Given an array arr[] and an integer K where K is smaller than size of array, the 
task is to find the Kth smallest element in the given array. It is given that all array 
elements are distinct.

Example 1:
    Input:
        N = 6
        arr[] = 7 10 4 3 20 15
        K = 3
    Output : 7
    Explanation :
    3rd smallest element in the given 
    array is 7.

Example 2:
    Input:
        N = 5
        arr[] = 7 10 4 20 15
        K = 4
    Output : 15
    Explanation :
    4th smallest element in the given 
    array is 15.

*/

#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr,arr+r+1);
    return arr[k-1];
}

int main () {

    int arr[] = { 7, 10, 4, 20, 15 };

    cout << kthSmallest(arr, 0, 4, 4) << endl;

    return 0;

}
