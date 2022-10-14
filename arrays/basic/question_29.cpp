/*

    ==> Elements in the Range <==

Question Link:- https://practice.geeksforgeeks.org/problems/elements-in-the-range2834/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array arr[] containing positive elements. A and B are two numbers defining a range. 
The task is to check if the array contains all elements in the given range.

Example 1:
    Input: N = 7, A = 2, B = 5
    arr[] =  {1, 4, 5, 2, 7, 8, 3}
    Output: Yes
    Explanation: It has elements between 
    range 2-5 i.e 2,3,4,5

Example 2:
    Input: N = 7, A = 2, B = 6
    arr[] = {1, 4, 5, 2, 7, 8, 3}
    Output: No
    Explanation: Array does not contain 6.

*/

#include <iostream>
#include <vector>
using namespace std;

bool check_elements(int arr[], int n, int A, int B) {
	vector<int> check(10000002, 0);
    for ( int i = 0; i < n; i++ ) check[arr[i]] = 1;
    for ( int i = A; i <= B; i++ ) if (check[i] != 1) return false;
    return true;
}

int main () {

    int arr[] =  { 1, 4, 5, 2, 7, 8, 3 };

    cout << check_elements(arr, 7, 2, 6) << endl;

    return 0;

}
