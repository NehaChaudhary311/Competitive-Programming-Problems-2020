/*INPUT : Array = 2,3,4,5,7
OUTPUT : Triplets are:-
		<2,3,5>
		<3,4,7>
		<2,5,7>
*/
#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
	int n;
	cin >> n;

	unordered_set<int> s;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		s.insert(arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (s.find(arr[i] + arr[j]) != s.end()) {
				cout << arr[i] << " " << arr[j], , " " << arr[i] + arr[j] << endl;

			}
		}
	}
	return 0;

}
