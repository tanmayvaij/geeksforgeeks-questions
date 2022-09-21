/*

    ==> Average in a stream <==

Question Link:- https://practice.geeksforgeeks.org/problems/average4856/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given a stream of incoming numbers, find average or mean of the stream at every point.

Example 1:
    Input:
        n = 5
        arr[] = {10, 20, 30, 40, 50}
    Output: 10.00 15.00 20.00 25.00 30.00 
    Explanation: 
    10 / 1 = 10.00
    (10 + 20) / 2 = 15.00
    (10 + 20 + 30) / 3 = 20.00
    And so on.

Example 2:
    Input:
        n = 2
        arr[] = {12, 2}
    Output: 12.00 7.00 
    Explanation: 
    12 / 1 = 12.00
    (12 + 2) / 2 = 7.00

*/

#include <iostream>
#include <vector>
using namespace std;

void printVector( vector<float> v ) {
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";
}

vector<float> streamAvg(int arr[], int n) {
    vector<float> ans;
    int sum = 0;
    float avg;
    for ( int i = 0; i < n; i++ ) {
        sum += arr[i];
        avg = sum / float(i+1);
        ans.push_back(avg);   
    }
    return ans;
}

int main () {

    int arr[] = { 10, 20, 30, 40, 50 };

    vector<float> ans = streamAvg(arr, 5);
    printVector(ans);

    return 0;

}
