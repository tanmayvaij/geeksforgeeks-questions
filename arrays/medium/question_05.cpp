/*

    ==> Majority Element <==

Question Link:- https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions

Given an array A of N elements. Find the majority element in the array. A majority 
element in an array A of size N is an element that appears more than N/2 times in the array.

Example 1:
    Input:
        N = 3 
        A[] = {1,2,3} 
    Output:
        -1
    Explanation:
    Since, each element in 
    {1,2,3} appears only once so there 
    is no majority element.

Example 2:
    Input:
        N = 5 
        A[] = {3,1,3,3,2} 
    Output:
        3
    Explanation:
    Since, 3 is present more
    than N/2 times, so it is 
    the majority element.

*/

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(int a[], int size) {
    vector<int> check(1000000, 0);
    for ( int i = 0; i < size; i++ ) check[a[i]]++;
    for ( int i = 0; i < check.size(); i++ ) if (check[i] > (size/2)) return i;     
    return -1;
}

int main () {

    int a[] = {3,1,3,3,2};
    cout << majorityElement(a, 5) << endl; 

    return 0;

}
