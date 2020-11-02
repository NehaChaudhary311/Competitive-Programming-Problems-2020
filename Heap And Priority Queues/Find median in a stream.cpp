/*
Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

Input:
The first line of input contains an integer N denoting the number of elements in the stream. Then the next N lines contains integer x denoting the number to be inserted into the stream.
Output:
For each element added to the stream print the floor of the new median in a new line.

Example:
Input:
4
5
15
1 
3
Output:
5
10
5
4
 
Explanation:
Testcase 1:
Flow in stream : 5, 15, 1, 3
5 goes to stream --> median 5 (5)
15 goes to stream --> median 10 (5, 15)
1 goes to stream --> median 5 (5, 15, 1)
3 goes to stream --> median 4 (5, 15, 1, 3)
 


*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	//code
	//test cases and x input integer
	int  T, x;
	cin >> T;
	//minHeap will hold the second part of stream
	priority_queue<int, vector<int>, greater<int>> minHeap;
	//maxHeap will hold the first part of stream
	priority_queue<int> maxHeap;

		while (T--)
		{
			cin >> x;
			//if maxHeap is empty or the incoming number is lesser than the top element of maxHeap
			if (maxHeap.empty() || maxHeap.top() > x)
				maxHeap.push(x);
			//if incoming number is higher than the top element of maxHeap
			else
				minHeap.push(x);

			//maintainng size criteria for both the heaps
			//Size difference between the heaps should never be greater than 1.
			//If it becomes greater than 1, pop from bigger heap and push to smaller heap
			if ((maxHeap.size() - minHeap.size()) == 2) {
				minHeap.push(maxHeap.top());
				maxHeap.pop();
			}
			else if ((minHeap.size() - maxHeap.size()) == 2) {
				maxHeap.push(minHeap.top());
				minHeap.pop();
			}

			//printing answer

			//if the heap sizes are same, take top element from each of the heap and take average
			if (maxHeap.size() == minHeap.size())
				cout << (maxHeap.top() + minHeap.top()) / 2 << endl;
			//if the heap sizes are different pop the top element from the higher size heap
			else {
				if (maxHeap.size() > minHeap.size())
					cout << maxHeap.top() << endl;
				else
					cout << minHeap.top() << endl;
			}
		}
}
