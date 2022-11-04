/*

    ==> Exceptionally odd <==

Given an array of N positive integers where all numbers occur even number of times except one 
number which occurs odd number of times. Find the exceptional number.

Example 1:
    Input:
        N = 7
        Arr[] = {1, 2, 3, 2, 3, 1, 3}
    Output: 3
    Explaination: 3 occurs three times.


Example 2:
    Input:
        N = 7
        Arr[] = {5, 7, 2, 7, 5, 2, 5}
    Output: 5
    Explaination: 5 occurs three times.

*/

#include <iostream>
#include <vector>
using namespace std;

int getOddOccurrence(int arr[], int n) {
    vector<int> check(100000,0);
    for ( int i = 0; i < n; i++ ) check[arr[i]]++;
    for ( int i = 0; i < 100000; i++ ) if ( check[i] % 2 != 0 ) return i;
    return 0;
}

int main () {

    int arr[] = {5, 7, 2, 7, 5, 2, 5};

    cout << getOddOccurrence(arr, 7);

    return 0;

}
