/*
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. 
Incase of conflict, return the substring which occurs first ( with the least starting index ).
Input:
2
aaaabbaa
racecar

Output:
aabbaa
racecar

*/

#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int expandFromMiddle(string s, int left, int right) {
    if (left > right)
        return 0;
    while (left >= 0 && right < s.length() && s.at(left) == s.at(right)) {
        left--;
        right++;
    }
    return right - left - 1;
}

string longestPalindrome(string s) {
    if (s.length() < 1)
        return "";
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int len1 = expandFromMiddle(s, i, i);
        int len2 = expandFromMiddle(s, i, i + 1);
        int len = max(len1, len2);
        if (len > (end - start)) {
            start = i - ((len - 1) / 2);
            end = i + (len / 2);
        }
        
    }
    return s.substr(start, end + 1);

}


int main() {
    //code
    int t = 0;
    cin >> t;
    while (t > 0) {
        char str[10000];
        cin >> str;
        cout << longestPalindrome(str);
        t--;
    }
    return 0;
}

class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.size(),start=0,maxlen=0;
    int left=0,right=0;
    if(n<2) return s;
    for(int i=0;i<n-1;){
        left=i, right=i;
        while(right<n && s[right]==s[right+1]){
            ++right;
        } 
        i=right+1;
        while(left>=0 && right<n && s[left]==s[right]){
            --left,++right;
        } 
        if(maxlen < right-left-1)   
            maxlen = right-left-1, start = left+1;         
        }
    return s.substr(start,maxlen);
    }   
};
