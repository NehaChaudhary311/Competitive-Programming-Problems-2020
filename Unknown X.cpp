/*
PROBLEM STATEMENT :-
Input : 
		The user will asked to input a string in the form of 
		100+X=200 or X+100=300 or 100+200=X without spaces in between and the computer has to find the value of X.
		Do not assume that the numbers will always be of 3 digits. 
		Also, the operators used in this question are only "+" and "="

Output : (We need to print the value of X)

*/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
	//Input unkonown string
	string unk;
	cin >> unk;

	//Find  size of unknown string
	int size_unk = unk.size();

	//a_beg, b_beg, c_beg hold the indices for the beginning of the strings a + b = c
	int a_beg = 0;
	int b_beg;
	int c_beg;

	//a_end, b_end, c_end hold the indices for the end of the the strings a + b = c
	int a_end, b_end, c_end = size_unk - 1;

	//ans will hold the output value which is 'X'
	int ans = 0;

	//loop through the unknown string
	for (int i = 0; i < size_unk; i++) {

		//if '+' appears, set a_end and b_beg
		if (unk[i] == '+')
		{
			a_end = i - 1;
			b_beg = i + 1;
		}
		//if '=' appears, set b_end and c_beg
		else if (unk[i] == '=') {
			b_end = i - 1;
			c_beg = b_end + 2;
		}
		//if some character or integer appears, skip and continue in the loop
		else {
			continue;
		}
	}
	
	//Now, since we have the indices, we can split the unknown string into a_unk, b_unk and c_unk
	string a_unk;
	for (int i = a_beg; i <= a_end; i++) {
		a_unk = a_unk + unk[i];
	}

	string b_unk;
	for (int i = b_beg; i <= b_end; i++) {
		b_unk = b_unk + unk[i];
	}

	string c_unk;
	for (int i = c_beg; i <= c_end; i++) {
		c_unk = c_unk + unk[i];
	}

	cout << endl << "Printing splitted parts : "<< a_unk<<" , " << b_unk<<" , " << c_unk<<endl;

	//To calculate the value of X, we need to check among a, b and c, which one is 'X'
	if (a_unk == "X") {
		//Converting string to integer and calculating
		ans = stoi(c_unk) - stoi(b_unk);
	}
	else if (b_unk == "X") {
		//Converting string to integer and calculating
		ans = stoi(c_unk) - stoi(a_unk);
	}
	else {
		//Converting string to integer and calculating
		ans = stoi(a_unk) + stoi(b_unk);
	}
	cout << endl << "Value of X :" << ans << endl;


}
