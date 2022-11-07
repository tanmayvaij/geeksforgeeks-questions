/*

    ==> Index of first 1 in a sorted array of 0s and 1s <==

Given a sorted array consisting 0s and 1s. The task is to find the index of first 1 in the given array.

Example 1:
    Input : 
        arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1}
    Output : 
        6
    Explanation:
    The index of first 1 in the array is 6.

Example 2:
    Input : 
        arr[] = {0, 0, 0, 0}
    Output : 
        -1
    Explanation:
    1's are not present in the array.

*/

#include <iostream>
using namespace std;

int firstIndex(int a[], int n) {
    for (int i = 0; i < n; i++) if (a[i] == 1) return i;
    return -1;
}

int main() {

    return 0;

}