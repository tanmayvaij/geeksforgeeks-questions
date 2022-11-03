/*

    ==> Maximum in Struct Array <==

Question Link:- https://practice.geeksforgeeks.org/problems/maximum-in-struct-array/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given a struct array of type Height, having two elements feet and inches. Find the maximum 
height among n heights, where height is calculated sum of feet and inches after converting 
feet into inches.

Example 1:
    Input:
        n = 2
        h1 -> 1 2
        h2 -> 2 1
    Output: 
        25
    Explanation:
    (1, 2) and (2, 1) are respective given heights.
    After converting both heigths in to inches,
    we get 14 and 25 as respective heights.
    So, 25 is the maximum height.

*/

#include <iostream>
using namespace std;

struct Height {
    int feet;
    int inches;
};

int toInch(Height h) {
    return h.feet*12 + h.inches;
}

int findMax(Height arr[], int n) {
    int mx = 0;
    for ( int i = 0; i < n; i++ ) mx = max( mx, toInch(arr[i]) );
    return mx;
}

int main () {

    Height h1, h2;

    h1.feet = 1;
    h1.inches = 2;

    h2.feet = 2;
    h2.inches = 1;

    Height arr [] = { h1, h2 };

    cout << findMax(arr, 2) << endl;

    return 0;

}
