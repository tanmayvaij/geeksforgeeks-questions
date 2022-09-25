/*
    ==> Implement Queue using array <==

Question Link:- https://practice.geeksforgeeks.org/problems/implement-queue-using-array/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

Implement a Queue using an Array. Queries in the Queue are of the following type:
(i) 1 x   (a query of this type means  pushing 'x' into the queue)
(ii) 2     (a query of this type means to pop element from queue and print the poped element)

Example 1:
    Input:
        Q = 5
        Queries = 1 2 1 3 2 1 4 2
    Output: 2 3
    Explanation:
    In the first test case for query 
    1 2 the queue will be {2}
    1 3 the queue will be {2 3}
    2   poped element will be 2 the 
        queue will be {3}
    1 4 the queue will be {3 4}
    2   poped element will be 3 

Example 2:
    Input:
        Q = 4
        Queries = 1 3 2 2 1 4   
    Output: 3 -1
    Explanation:
    In the second testcase for query 
    1 3 the queue will be {3}
    2   poped element will be 3 the
        queue will be empty
    2   there is no element in the
        queue and hence -1
    1 4 the queue will be {4}. 

*/

#include <iostream>
using namespace std;

class MyQueue {

    private:
        int arr[100005], front, rear;

    public :
        MyQueue() {
            front=0;
            rear=0;
        }
        void push(int x);
        int pop();

};

void MyQueue :: push(int x) {
    arr[rear] = x;
    rear++;
}

int MyQueue :: pop() {
    return ( front == rear ) ? -1 : arr[front++] ;
}

int main () {

    MyQueue q;

    q.push(2);
    q.push(3);
    cout << q.pop();
    q.push(4);
    cout << q.pop();

    return 0;

}
