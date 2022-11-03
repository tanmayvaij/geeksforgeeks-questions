/*

    ==> Last index of One <==

Question Link:- https://practice.geeksforgeeks.org/problems/last-index-of-15847/1?page=2&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Example 1:
    Input:
        S = 00001
    Output:
        4
    Explanation:
    Last index of  1 in given string is 4.

Example 2:
    Input:
        0
    Output:
        -1
    Explanation:
    Since, 1 is not present, so output is -1.

*/

#include <iostream>
using namespace std;

int lastIndex(string s) {
    int n = s.size();
    for ( int i = n-1; i >= 0; i-- ) if ( s[i] == '1' ) return i;      
    return -1;
}

int main () {

    cout << lastIndex("00001") << endl;

    return 0;

}
