/*

    ==> Sum of Series <==

Question Link:- https://practice.geeksforgeeks.org/problems/sum-of-series2811/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Example 1:
    Input:
        N = 1
    Output: 1
    Explanation: For n = 1, sum will be 1.

Example 2:
    Input:
        N = 5
    Output: 15
    Explanation: For n = 5, sum will be 1
    + 2 + 3 + 4 + 5 = 15.

Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms) 

*/

#include <iostream>
using namespace std;

long long seriesSum(int n) {
    return (n * (n + 1)) / 2;
}

int main () {

    cout << seriesSum(5);

    return 0;

}
