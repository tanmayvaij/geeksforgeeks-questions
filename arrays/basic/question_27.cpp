/*

    ==> Multiply left and right array sum. <==

Question Link:- https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Pitsy needs help with the given task by her teacher. The task is to divide an array into 
two sub-array (left and right) containing n/2 elements each and do the sum of the subarrays
and then multiply both the subarrays.

Note: If the length of the array is odd then the right half will contain one element more 
than the left half.

Example 1:
    Input : arr[ ] = {1, 2, 3, 4}
    Output : 21
    Explanation:
    Sum up an array from index 0 to 1 = 3
    Sum up an array from index 2 to 3 = 7
    Their multiplication is 21.


Example 2:
    Input : arr[ ] = {1, 2} 
    Output :  2 

*/

#include <iostream>
using namespace std;

int multiply(int arr[], int n) {
    int lsum=0, rsum=0;
    for ( int i = 0; i < n; i++ ) ( i < n/2 ) ? lsum += arr[i] : rsum += arr[i]; 
    return lsum*rsum;
}

int main () {

    int arr[] = {1, 2, 3, 4};
    cout << multiply(arr, 4);
    return 0;

}
