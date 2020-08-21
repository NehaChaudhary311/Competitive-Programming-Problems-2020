/*
Example 1:
Input: "Hello"
Output: "hello"

Example 2:
Input: "here"
Output: "here"
*/


class Solution {
public:
    string toLowerCase(string str) {
        int n = str.length();
        for(int i  = 0; i < n ; i++){
            if((int)str[i] >64 && 91 >(int)str[i] )
                str[i] = (char)((int)str[i] + 32);
        }
        return str;
    }
};
