/*
N numbers ranging From 1 to N are given, there is exactly one number missing and exactly
one is repeated find the repeated and missing number.
Note : Since there is exactly one number repeating and n=one missing, I have skipped the possibility
of no number missing or no number repeating.

Input : 5
		Enter the numbers : 4 3 4 2 1
Output : Repeated : 4
		 Missing : 5
*/
#include<iostream> 
using namespace std;

int main(){
	int N;
	cin >> N;
	int arr[10];
	int arr_temp[10];
	for (int i = 0; i < N; i++) {
		*(arr + i) = 0;

	}
	for (int i = 0; i < N; i++) {
		*(arr_temp + i) = 0;

	}
	cout << "Enter the numbers : ";
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i <N ; i++) {
		int x = arr[i];
		arr_temp[x-1]++;
	}
	int repeated = 0, missing = 0;
	for (int i = 0; i < N; i++) {
		if (arr_temp[i] == 2)
			repeated = i+1;
		else if (arr_temp[i] == 0)
			missing = i+1;
		else
			continue;
	}
	cout << "Repeated : " << repeated<<endl;
	cout << "Missing : " << missing<<endl;
	return 0;
}
