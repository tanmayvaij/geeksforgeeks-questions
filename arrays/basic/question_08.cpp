/*

    ==> Search an Element in an array <==

Question Link:- https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given an integer array and another integer element. The task is to find if the
given element is present in array or not.

Example 1:
    Input:
        n = 4
        arr[] = {1,2,3,4}
        x = 3
    Output: 2
    Explanation: There is one test case
    with array as {1, 2, 3 4} and element
    to be searched as 3.  Since 3 is
    present at index 2, output is 2.

Example 2:
    Input:
        n = 5
        arr[] = {1,2,3,4,5}
        x = 5
    Output: 4
    Explanation: For array elements
    {1,2,3,4,5} element to be searched
    is 5 and it is at index 4. So, the
    output is 4.

*/

#include <iostream>
using namespace std;

int search(int arr[], int N, int X) {

    int l = 0, r = N - 1;

    while (l <= r) {

        int m = (l + r) / 2;

        if (arr[m] == X)
            return m;

        if (arr[m] < X)
            l = m + 1;

        else
            r = m - 1;

    }

    return -1;

}

int main(){

    int arr[] = {1,2,3,4,5};
    cout << search(arr, 5, 5) << endl;

    return 0;

}
