/*

    ==> Product of array elements <==

Question Link:- https://practice.geeksforgeeks.org/problems/product-of-array-element/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

This is a functional problem. Your task is to return the product 
of array elements under a given modulo.
The modulo operation finds the remainder after the division of one number 
by another. For example, K(mod(m))=K%m= remainder obtained when K is divided by m

Example:
    Input:
        1
        4
        1 2 3 4
    Output:
        24

*/

#include <iostream>
using namespace std;

long long int product(int arr[], int n, long long int mod) {
    long long int prod = 1;
    for ( int i = 0; i < n; i++ ) 
        prod = ( prod * arr[i] ) % mod;
    return prod;
}

int main () {

    int arr [] = { 1, 2, 3, 4 };
    cout << product(arr, 4, 1);

    return 0;

}
