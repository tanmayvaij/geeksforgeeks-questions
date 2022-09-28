/*

    ==> Display longest name <==

Given a list of names, display the longest name.

Example:
Input:
    N = 5
    names[] = { "Geek", "Geeks", "Geeksfor",
    "GeeksforGeek", "GeeksforGeeks" }
Output:
    GeeksforGeeks

*/

#include <iostream>
using namespace std;

string longest(string names[], int n) {
    int maxlen = 0, maxidx = 0;
    for (int i = 0; i < n; i++) {
        if (names[i].length() > maxlen) {
            maxlen = names[i].length();
            maxidx = i;
        }
    }
    return names[maxidx];
}

int main() {

    string names[] = { "Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks" };

    cout << longest(names, 5) << endl;

    return 0;

}
