/*Description - Given an integer k and a queue of integers, we need to reverse the order of the first k elements of the queue, leaving the other elements in the same relative order.
Only the following standard operations are allowed on the queue.
enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size(( : Returns number of elements in queue.
front() : Finds front item.

Input : Q = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
        k = 5
Output : Q = [50, 40, 30, 20, 10, 60, 70, 80, 90, 100]
*/
#include<iostream>
using namespace std;
#include<queue>
#include<stack>

void reverseQueueFirstKElements(int k, queue<int> Queue)
{
    if (Queue.empty() == true || k > Queue.size())
        return;
    if (k <= 0)
        return;
    stack<int>  Stack;
    /* Push the first K elements into a Stack*/
    for (int i = 1; i < k;i++) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    /* Enqueue the contents of stack
       at the back of the queue*/
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
    /* Remove the remaining elements and
       enqueue them at the end of the Queue*/
    for (int i = 0; i < Queue.size() - k; i++) {
        Queue.push(Queue.front());
        Queue.pop();
    }
}

int main()
{
    std::queue<int> myqueue;
    int myint, k;

    do {
        cin >> myint;
        myqueue.push(myint);
    } while (myint);

    cin >> k;
    reverseQueueFirstKElements(k, myqueue);

    return 0;
}