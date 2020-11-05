/*
Z(N) is the number of zeros at the end of the decimal form of number N!. Find Z(N) of a number 'N'.
Input: n = 20
Output: 4
Factorial of 20 is 2432902008176640000

Input: n = 100
Output: 24
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T = 0;
	cin>>T;
	while(T--){
	    int num = 0;
	    cin>>num;
	    int count = 0;
	    for (int i = 5; num/i >= 1; i= i*5){
            count += num/i; 
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}
