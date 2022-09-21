/*

    ==> Palindromic Array <==

Question Link:- https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given a Integer array A[] of n elements. Your task is to complete the 
function PalinArray. Which will return 1 if all the elements of the 
Array are palindrome otherwise it will return 0.

Example:
    Input:
        2
        5
        111 222 333 444 555
        3
        121 131 20
    Output:
        1
        0
    Explanation:
    For First test case.
    n=5;
    A[0] = 111    //which is a palindrome number.
    A[1] = 222   //which is a palindrome number.
    A[2] = 333   //which is a palindrome number.
    A[3] = 444  //which is a palindrome number.
    A[4] = 555  //which is a palindrome number.
    As all numbers are palindrome so This will return 1.

*/

#include <iostream>
#include <math.h>
using namespace std;

bool isPalindrome(int n) {
    int temp_num = n, i = 0, res_num = 0;
    while ( n != 0 ) {
        int digit = n % 10;
        n /= 10;
        res_num *= 10; 
        res_num +=  digit;
        i++; 
    }
    if ( res_num == temp_num) return true;
    return false;
}

int PalinArray(int arr[], int n) {
    for ( int i = 0; i < n; i++ ) 
        if ( isPalindrome(arr[i]) == 0 ) return 0; 
    return 1;
}

int main () {

    int arr [] = { 121, 131, 20 };
    cout << PalinArray(arr, 3);

    return 0;

}
