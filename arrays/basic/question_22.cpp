/*

    ==> Product of maximum in first array and minimum in second <==

Question Link:- https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Given two arrays of A and B respectively of sizes N1 and N2, the task is to calculate 
the product of the maximum element of the first array and minimum element of the second array.

Example 1:
    Input : A[] = {5, 7, 9, 3, 6, 2}, 
            B[] = {1, 2, 6, -1, 0, 9}
    Output : -9
    Explanation:
    The first array is 5 7 9 3 6 2. 
    The max element among these elements is 9.
    The second array is 1 2 6 -1 0 9.
    The min element among these elements is -1.
    The product of 9 and -1 is 9*-1=-9.

Example 2:
    Input : A[] = {0, 0, 0, 0}, 
            B[] = {1, -1, 2}
    Output : 0

*/

#include <iostream>
#include <algorithm>
using namespace std;

long long find_multiplication(int a[], int b[], int n, int m) {
    sort(a, a+n);
    sort(b, b+m);
    return a[n-1] * b[0];
}

int main () {

    int a[] = {5, 7, 9, 3, 6, 2};
    int b[] = {1, 2, 6, -1, 0, 9};

    cout << find_multiplication(a, b, 6, 6);

    return 0;

}
