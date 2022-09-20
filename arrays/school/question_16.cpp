/*
    ==> At least two greater elements <==

Question Link:- https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements4625/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array of N distinct elements, the task is to find all elements 
in array except two greatest elements in sorted order.

Example 1:
    Input : 
        a[] = {2, 8, 7, 1, 5}
    Output :
        1 2 5 
    Explanation :
    The output three elements have two or
    more greater elements.  

Example 2:
    Input :
        a[] = {7, -2, 3, 4, 9, -1}
    Output :
        -2 -1 3 4

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector( vector<int> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> findElements(int arr[], int n) {
    sort(arr, arr+n);
    vector<int> ans( arr, arr+n-2 );
    return ans;
}

int main () {
    
    int arr[] = { 7, -2, 3, 4, 9, -1};
    vector<int> ans = findElements(arr, 6);
    printVector(ans);

    return 0;

}
