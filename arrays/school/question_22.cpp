/*

    ==> C++ 2-D Arrays | Set-1 <==

Question Link:- https://practice.geeksforgeeks.org/problems/c-2-d-arrays0708/1?page=2&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given a 2-d array of integers having N*N elements, print the transpose of the array.

Example 1:
    Input : arr[] = {{1,2,3}, {4,5,6}, 
                    {7,8,9}} and N = 3
    Output : 1 4 7 2 5 8 3 6 9
    Explanation:1 2 3       1 4 7
                4 5 6 ----> 2 5 8
                7 8 9       3 6 9
    Transpose of array.

Example 2:
    Input : arr[ ] = {{1, 2}, {1, 2}} 
                        and N = 2 
    Output :  1 1 2 2

*/

#include <iostream>
#include <vector>
using namespace std;
#define M 101

void printMatrix( vector<vector<int>> v, int n ) {
    for ( int i = 0; i < v.size(); i++ ) {
        for ( int j = 0; j < v.size(); j++ ) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transpose(int arr [M][M], int n) {

    vector<vector<int>> tp;
    vector<int> row;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n; j++ ) 
            row.push_back(arr[j][i]);
        tp.push_back(row);
        row = {};
    }

    return tp;

}

int main () {

    int arr[M][M] = {
        { 1, 2, 3 }, 
        { 4, 5, 6 }, 
        { 7, 8, 9 }
    };

    vector<vector<int>> ans = transpose(arr, 3);

    printMatrix(ans, 3);

    return 0;

}
