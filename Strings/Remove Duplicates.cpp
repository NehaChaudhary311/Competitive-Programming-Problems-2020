/*
Given a string, the task is to remove duplicates from it.
Expected time complexity O(n) where n is length of input string and extra space O(1) 
under the assumption that there are total 256 possible characters in a string.

Assumptions : Only small letters are allowed
O/P: Output will not be printed in the order of the original string but in alphabetical order.

*/

#include <iostream>
using namespace std;

int main() {
	//code
	int T = 0;
	cin>>T;
	while(T>0){
	    string str;
	    cin>>str;
	    char aux[26] ={0};
	    int len = str.length();
	    for(int i = 0; i< len; i++){
	        int x = (int)str[i];
	        x = x - 97;
	        aux[x] ++;
	    }
	    for(int i = 0; i<26;i++){
	        if(aux[i] == 0){
	            continue;
	        }
	        else{
	            cout<<(char)(i + 97);
	        }
	    }
	    cout<<endl;
	    
	    T--;
	}
	return 0;
}
