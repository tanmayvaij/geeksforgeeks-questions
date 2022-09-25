/*

    ==> Replace all 0's with 5 <==

Question Link:- https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

You are given an integer N. You need to convert all zeroes of N to 5.

Example 1:
    Input:
        N = 1004
    Output: 1554
    Explanation: There are two zeroes in 1004
    on replacing all zeroes with "5", the new
    number will be "1554".

Example 2:
    Input:
        N = 121
    Output: 121
    Explanation: Since there are no zeroes in
    "121", the number remains as "121".

*/

#include <iostream>
#include <math.h>
using namespace std;

int convertFive(int n) {
    int res = 0, i = 0;
    while ( n != 0 ) {
        int digit = n % 10;
        if (digit == 0) digit = 5;
        digit *= pow(10, i);
        i++;
        res += digit;
        n /= 10;
    }
    return res;
}

int main () {

    cout << convertFive(1004);

    return 0;

}
