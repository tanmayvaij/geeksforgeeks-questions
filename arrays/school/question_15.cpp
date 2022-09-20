/*

    ==> Perfect Arrays <==

Question Link:- https://practice.geeksforgeeks.org/problems/perfect-arrays4645/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given an array of size N and you have to tell whether the array is perfect or not. 
An array is said to be perfect if it's reverse array matches the original array. 
If the array is perfect then print "PERFECT" else print "NOT PERFECT".

Example 1:
    Input : Arr[] = {1, 2, 3, 2, 1}
    Output : PERFECT
    Explanation:
    Here we can see we have [1, 2, 3, 2, 1] 
    if we reverse it we can find [1, 2, 3, 2, 1]
    which is the same as before.
    So, the answer is PERFECT.

Example 2:
    Input : Arr[] = {1, 2, 3, 4, 5}
    Output : NOT PERFECT

*/

#include <iostream>
using namespace std;

bool isPerfect( int arr [], int n ) {
    int s = 0, e = n-1;
    while ( s < e ) {
        if ( arr[s] != arr[e] ) return false;
        s++;
        e--;
    } 
    return true;
}

int main () {

    int arr [] = { 1, 2, 3, 2, 1 };
    cout << isPerfect(arr, 5);

    return 0;

}
