/*

    ==> Sum of Array <==

Question Link:- https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
Question Link:- https://practice.geeksforgeeks.org/problems/sum-of-array2326/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array of N integers. Your task is to print the sum of all of the integers.

Example 1:
    Input:
        4
        1 2 3 4
    Output:
        10
 

Example 2:
    Input:
        6
        5 8 3 10 22 45
    Output:
        93

*/

#include <iostream>
using namespace std;

int getSum( int arr [], int n ) {
    int sum = 0;
    for ( int i = 0; i < n; i++ ) sum += arr[i];
    return sum;
}

int main () {
    
    int arr [] = { 5, 8, 3, 10, 22, 45 };
    int n = sizeof(arr) / sizeof(int);

    cout << getSum(arr, n);

    return 0;

}
