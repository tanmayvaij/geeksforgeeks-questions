/*

    ==> Fascinating Number <==

Question Link:- https://practice.geeksforgeeks.org/problems/fascinating-number3751/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

Given a number N. Your task is to check whether it is fascinating or not.
Fascinating Number: When a number(should contain 3 digits or more) is multiplied 
by 2 and 3 ,and when both these products are concatenated with the original number, 
then it results in all digits from 1 to 9 present exactly once.

Example 1:
    Input: 
        N = 192
    Output: Fascinating
    Explanation: After multiplication with 2
    and 3, and concatenating with original
    number, number will become 192384576 
    which contains all digits from 1 to 9.

Example 2:
    Input: 
        N = 853
    Output: Not Fascinating
    Explanation: It's not a fascinating
    number.

*/

#include <iostream>
#include <algorithm>
using namespace std;

bool fascinating(int n) {
    string s = to_string(n) + to_string(n*2) + to_string(n*3);
    sort(s.begin(), s.end());
    if (s != "123456789") return false;
    return true;
}

int main () {

    cout << fascinating(192);

    return 0;

}
