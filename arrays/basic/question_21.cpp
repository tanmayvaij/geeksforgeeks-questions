/*

    ==> Game with nos <==

Question Link:- https://practice.geeksforgeeks.org/problems/game-with-nos3123/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

You are given an array arr[], and you have to re-construct an array arr[].
The values in arr[] are obtained by doing Xor of consecutive elements in the array.

Example 1:
    Input : n=5, arr[ ] = {10, 11, 1, 2, 3}
    Output : 1 10 3 1 3
    Explanation:
    At index 0, arr[0] xor arr[1] = 1
    At index 1, arr[1] xor arr[2] = 10
    At index 2, arr[2] xor arr[3] = 3
    ...
    At index 4, No element is left So, it will remain as
    it is.
    New Array will be {1, 10, 3, 1, 3}.

Example 2:
    Input : n=4, arr[ ] = {5, 9, 7, 6}
    Output :  12 14 1 6
    Explanation:
    At index 0, arr[0] xor arr[1] = 12
    At index 1, arr[1] xor arr[2] = 14
    At index 2, arr[2] xor arr[3] = 1
    At index 3, No element is left So, it will remain as it is.
    New Array will be {12, 14, 1, 6}.

*/

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for ( int i = 0; i < n; i++ ) cout << arr[i] << " ";
}

int* game_with_number(int arr[], int n) {
    for ( int i = 0; i <= n-2; i++ ) arr[i] ^= arr[i+1];
    return arr;
}

int main () {

    int arr[] = {10, 11, 1, 2, 3}, n = 5;

    int *ar2 = game_with_number(arr, n);

    printArray(ar2, n);

    return 0;

}
