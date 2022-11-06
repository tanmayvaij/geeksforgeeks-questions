/*

    ==> Minimum number of Coins <==

Question Link:- https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1

Given an infinite supply of each denomination of Indian currency 
{ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 } and a target value N.
Find the minimum number of coins and/or notes needed to make the change for Rs N. You must return 
the list containing the value of coins required. 

Example 1:
    Input: N = 43
    Output: 20 20 2 1
    Explaination: 
    Minimum number of coins and notes needed 
    to make 43. 

Example 2:
    Input: N = 1000
    Output: 500 500
    Explaination: minimum possible notes
    is 2 notes of 500.

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector( vector<int> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<int> minPartition(int N) {

    vector<int> ans;
    int m;

    while (N != 0) {
        
        if (N >= 2000) m = 2000;
        else if (N >= 500) m = 500;
        else if (N >= 200) m = 200;
        else if (N >= 100) m = 100;
        else if (N >= 50) m = 50;
        else if (N >= 20) m = 20;
        else if (N >= 10) m = 10;
        else if (N >= 5) m = 5;
        else if (N >= 2) m = 2;
        else m = 1;

        N -= m;

        ans.push_back(m);

    }

    return ans;

}

int main(){

    vector<int> ans = minPartition(1000);

    printVector(ans);

    return 0;

}
