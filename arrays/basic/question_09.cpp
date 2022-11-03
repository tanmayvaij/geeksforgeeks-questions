/*

    ==> Implement stack using array <==

Question Link:- https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Write a program to implement a Stack using Array. Your task is to use the class 
as shown in the comments in the code editor and complete the functions push() and pop() 
to implement a stack. 

Example 1:
    Input: 
        push(2)
        push(3)
        pop()
        push(4) 
        pop()
    Output: 3, 4
    Explanation: 
    push(2)    the stack will be {2}
    push(3)    the stack will be {2 3}
    pop()      poped element will be 3,
            the stack will be {2}
    push(4)    the stack will be {2 4}
    pop()      poped element will be 4

Example 2:
    Input: 
        pop()
        push(4)
        push(5)
        pop()
    Output: -1, 5

*/

#include <iostream>
using namespace std;

class MyStack {
    private:
        int arr[1000], top;
    public:
        MyStack() {
            top = -1;
        }
        int pop();
        void push(int n);
};

void MyStack :: push(int n) {
    top++;
    arr[top] = n;
}

int MyStack :: pop() {
    if (top == -1) return -1;
    int res = arr[top];
    top--;
    return res;
}

int main () {

    MyStack s;

    cout << s.pop() << endl;
    s.push(4);
    s.push(5);
    cout << s.pop() << endl;

    return 0;

}
