/*

    ==> Ishaan Loves Chocolates <==

Question Link:- https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

As we know, Ishaan has a love for chocolates. He has bought a huge chocolate bar that 
contains N chocolate squares. Each of the squares has a tastiness level which is denoted 
by an array A[].
Ishaan can eat the first or the last square of the chocolate at once. Ishaan has a sister 
who loves chocolates too and she demands the last chocolate square. Now, Ishaan being 
greedy eats the more tasty square first. 
Determine the tastiness level of the square which his sister gets.

Example 1:
    Input : arr[ ] = {5, 3, 1, 6, 9}
    Output : 1
    Explanation:
    Initially: 5 3 1 6 9
    In first step: 5 3 1 6
    In Second step: 5 3 1
    In Third step: 3 1
    In Fourth step: 1
    Return 1

Example 2:
    Input : arr[ ] = {5, 9, 2, 6} 
    Output :  2

*/

#include <iostream>
#include <vector>
using namespace std;

int chocolates(int n, vector<int> &arr) {
    int st = 0, en = n-1;
    while ( st != en ) ( arr[st] > arr[en] ) ? st++ : en--;
    return arr[st];
}

int main () {

    vector<int> arr = { 5, 3, 1, 6, 9 };
    cout << chocolates(5, arr) << endl;

    return 0;

}
