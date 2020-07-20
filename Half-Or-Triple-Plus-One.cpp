/*
Input : 14
Output : 14 is even so half is 7
		 7 is odd so 3n+1 is 22
		 22 is even so half is 11
		 11 is odd so 3n+1 is 34
		 .
		 .
		 .
		 .
		 2 is even and half is 1
*/
#include<iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	while (x != 1)
	{
		if (x % 2 == 0) {
			cout << x << " is even so half is " << x / 2 << endl;
			x = x / 2;

		}
		else {

			cout << x << " is odd so 3n+1 is " << 3 * x + 1 << endl;
			x = 3 * x + 1;
		}
	}
	return 0;

}
