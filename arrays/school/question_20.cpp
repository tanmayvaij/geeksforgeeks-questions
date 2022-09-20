/*

    ==> Compete the skills <==

Question Link:- https://practice.geeksforgeeks.org/problems/compete-the-skills5807/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

A and B are good friend and programmers. They are always in a healthy 
competition with each other. They decide to judge the best among them by 
competing. They do so by comparing their three skills as per their values. 
Please help them doing so as they are busy.

Set for A are like [a1, a2, a3]
Set for B are like [b1, b2, b3]

Compare ith skill of A with ith skill of B
if a[i] > b[i] , A's score increases by 1
if a[i] < b[i] , B's score increases by 1
if a[i] = b[i] , nothing happens

Example 1:
    Input : 
        A = {4, 2, 7}
        B = {5, 6, 3}
    Output : 
        1 2

Example 2:
    Input : 
        A = {4, 2, 7}
        B = {5, 2, 8}
    Output : 
        0 2

*/

#include <iostream>
using namespace std;

void scores(long long a[], long long b[], int &ca, int &cb) {
    for ( int i = 0; i < 3; i++ ) {
        if ( a[i] > b[i] ) ca++;
        else if ( a[i] < b[i] ) cb++;
    }
}

int main () {

    long long int a[] = {4, 2, 7}, b[] = {5, 2, 8};
    int ca = 0, cb = 0;

    scores(a, b, ca, cb);

    cout << ca << " " << cb;

    return 0;

}
