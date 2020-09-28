//Implementation of queue using 2 stacks

#include<iostream>
#include<stack>
using namespace std;

template<class X>
class Queue {

private:
	stack<X> s1, s2;
public:
	Queue() {
	}
	
	void enQueue(X d) {
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(d);
		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	X deQueue() {
		if (s1.empty()) {
			return -1;
		}
		X data1 = s1.top();
		s1.pop();
		return data1;
	}
	X peek() {
		return s1.top();
	}
	X empty() {
		return s1.empty();
	}
	
};

int main() {
	Queue<int> q1;
	q1.enQueue(5);
	q1.enQueue(10);
	q1.enQueue(15);
	cout << "Front of the queue:" << q1.peek() << endl;
	cout << "Check whether queue is empty:" << q1.empty() << endl;
	cout << "Dequeuing queue :-" << endl;
	cout << q1.deQueue() << " ";
	cout << q1.deQueue() << " ";
	return 0;
}

