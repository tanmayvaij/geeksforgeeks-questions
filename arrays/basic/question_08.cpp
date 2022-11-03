/*

    ==> First and last occurrences of x <==

Question Link:- https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given a sorted array arr containing n elements with possibly duplicate elements, 
the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:
    Input:
        n=9, x=5
        arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
    Output:  2 5
    Explanation: First occurrence of 5 is at index 2 and last
                occurrence of 5 is at index 5. 
 

Example 2:
    Input:
        n=9, x=7
        arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
    Output:  6 6 

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector( vector<int> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> find(int arr[], int n , int x ) {

    int first = -1, last = -1;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if ( arr[i] == x ) {
            first = i;
            found = true;
            break;
        }
    }

    if ( found = false )
        return { -1, -1 };

    for (int i = n-1; i >= 0; i--) {
        if ( arr[i] == x ) {
            last = i;
            break;
        }
    }

    return { first, last };

}

int main () {

    int arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 };

    vector<int> ans = find(arr, 9, 7);

    printVector(ans);

    return 0;

}
