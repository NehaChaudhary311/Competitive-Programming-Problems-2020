//implement queue using only one stack
#include<iostream>
#include<stack>
using namespace std;
template<class X>
class Queue {
private:
	stack<X> s;
public:
	Queue() {

	}
	void enQueue(X d) {
		s.push(d);
	}
	X deQueue() {
		if (s.empty()) {
			return -1;
		}
		X temp = s.top();
		s.pop();
		if (s.empty())
			return temp;
		X item = deQueue();
		s.push(temp);
		return item;
	}
	X peek() {
		return s.top();
	}
	X empty() {
		return s.empty();
	}
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

};
