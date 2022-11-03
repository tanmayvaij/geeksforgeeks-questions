/*

    ==> Find duplicates in an array <==

Question Link:- https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions

Given an array a[] of size N which contains elements from 0 to N-1, you need 
to find all the elements occurring more than once in the given array.

Example 1:
    Input:
        N = 4
        a[] = {0,3,1,2}
    Output: -1
    Explanation: N=4 and all elements from 0
    to (N-1 = 3) are present in the given
    array. Therefore output is -1.

Example 2:
    Input:
        N = 5
        a[] = {2,3,1,2,3}
    Output: 2 3 
    Explanation: 2 and 3 occur more than once
    in the given array.

*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void printVector( vector<int> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> duplicates(int arr[], int n) {
    vector<int> boolarr(100000, 0), ans;
    set<int> s;
    for ( int i = 0; i < n; i++ ) {
        if ( boolarr[arr[i]] == 1 ) s.insert(arr[i]);
        else boolarr[arr[i]] = 1;
    }
    for ( auto iter = s.begin(); iter != s.end(); iter++  ) ans.push_back(*iter);
    if (ans.size() >= 1 ) return ans;
    return {-1};
}

int main () {

    int a[] = {2,3,1,2,3};

    vector<int> ans = duplicates(a, 5);

    printVector(ans);

    return 0;

}
