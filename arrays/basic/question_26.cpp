/*

    ==> Find the smallest and second smallest element in an array <==

Question Link:- https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an array of integers, your task is to find the smallest and second smallest 
element in the array. If smallest and second smallest do not exist, print -1.

Example 1:
    Input :
        5
        2 4 3 5 6
    Output :
        2 3 
    Explanation: 
    2 and 3 are respectively the smallest 
    and second smallest elements in the array.

Example 2:
    Input :
        6
        1 2 1 3 6 7
    Output :
        1 2 
    Explanation: 
    1 and 2 are respectively the smallest 
    and second smallest elements in the array.

*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n) {
    sort(a, a+n);
    set<int> s;
    for ( int i = 0; i < n; i++ ) s.insert(a[i]);
    if ( s.size() < 2 ) return { -1, -1 };
    return { *s.begin(), *(++s.begin())};
}

int main () {
    int a[] = {1, 2, 1, 3, 6, 7};
    vector<int> ans = minAnd2ndMin(a, 6);
    cout << ans[0] << " " << ans[1];
}
