/*

    ==> Find Index <==

Question Link:- https://practice.geeksforgeeks.org/problems/find-index4752/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an unsorted array Arr[] of N integers and a Key which is present 
in this array. You need to write a program to find the start 
index( index where the element is first found from left in the array ) 
and end index( index where the element is first found from right in the array ).

Example 1:
    Input:
        N = 6
        arr[] = { 1, 2, 3, 4, 5, 5 }
        Key = 5
    Output:  4 5
    Explanation:
    5 appears first time at index 4 and
    appears last time at index 5.
    (0 based indexing)

Example 2:
    Input:
        N=6
        arr[] = { 6, 5, 4, 3, 1, 2 }
        Key = 4
    Output:  2 2 

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector( vector<int> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> findIndex(int arr[], int n, int key) {
    int x = 0, y = n-1;
    for ( int i = 0; i < n; i++ ) {
        if ( arr[x] != key ) x++;
        if ( arr[y] != key ) y--;
    }
    if ( x == n ) x = -1;
    return { x, y };
}

int main() {

    int arr [] = { 21, 11, 30, 17, 30, 18, 13, 23, 10, 30, 11, 15, 21, 13, 13, 24, 25, 11, 15, 30, 15, 18, 13 };
    vector<int> ans = findIndex(arr, 23, 899);
    printVector(ans);

    return 0;

}
