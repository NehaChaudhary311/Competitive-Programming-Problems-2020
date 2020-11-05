/*
Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers to move at its maximum speed.
If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions.
For the purpose of this problem, you can assume that the straight segment is infinitely long.
Count the number of cars which were moving at their maximum speed on the straight segment.

Example
Input:
3
1
10
3
8 3 6
5
4 5 1 2 3

Output:
1
2
2
*/

#include <iostream>
using namespace std;
//Input: 4 5 1 2 3 O/P: 2 
//8 3 6 -2 

int carsWithMaxSpeeds(int* arr, int num) {
	int car_count = 1;
	for (int i = 1; i < num; i++) {
		if (arr[i] > arr[i - 1])
			arr[i] = arr[i - 1];
		else
			car_count++;
	}
	return car_count;
}
int main() {
	// your code goes here
	int T;
	cin >> T;
	while (T--) {
		int num;
		cin >> num;
		int* arr = new int[num];
		for (int i = 0; i < num; i++) {
			cin >> arr[i];
		}
		cout << carsWithMaxSpeeds(arr, num) << endl;
		delete[] arr;
	}

	return 0;
}
