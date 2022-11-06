/*

    ==> Sum of Array Elements <==

Question Link:- https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/1?page=2&difficulty[]=0&category[]=Arrays&sortBy=submissions

Given an integer array arr of size n, you need to sum the elements of arr.

Example 1:
    Input:
        n = 3
        arr[] = {3 2 1}
    Output: 6

Example 2:
    Input:
        n = 4
        arr[] = {1 2 3 4}
    Output: 10

*/

#include <iostream>
using namespace std;

int sumElement(int arr[],int n) {
    int sum = 0;
    for ( int i = 0; i < n; i++ ) sum += arr[i];
    return sum;
}

int main () {

    int arr[] = {1, 2, 3, 4};
    cout << sumElement(arr, 4);

    return 0;

}