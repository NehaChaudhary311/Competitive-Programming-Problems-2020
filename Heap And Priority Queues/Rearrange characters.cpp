/*
Given a string S with repeated characters (only lowercase). The task is to rearrange characters in a string such that no two adjacent characters are same.
Note : It may be assumed that the string has only lowercase English alphabets.

Example:
Input:
3
geeksforgeeks
bbbabaaacd
bbbbb

Output:
1
1
0

Explanation:
Testcase 1: All the repeated characters of the given string can be rearranged so that no adjacent characters in the string is equal.
Testcase 3: Repeated characters in the string cannot be rearranged such that there should not be any adjacent repeated character.

*/

#include<iostream>
#include<algorithm>
using namespace std;
int rearrangeChars(string s){
    int max = 0; //most frequently occuring elements adjacent to each other
    int len = s.length();
    sort(s.begin(),s.end());
    int i = 0;
    while(i < len-1){
        int count = 1;
        while(s[i] == s[i+1]){
           count++;
           i++;
            }
        if(count>max){
           max = count;
        }
        i++;
    }
    //
    if(len%2 == 0){
        if(max <= len/2)
            return 1;
        else
            return 0;
    }
    if(len%2 != 0){
        if(max <= len/2)
            return 1;
        else
            return 0;
    }
}
int main()
 {
	//code
	int T = 0;
	cin>>T;
	while(T--){
	    string s;
    	cin>>s;
    	cout<<rearrangeChars(s)<<endl;
	}
	return 0;
}
