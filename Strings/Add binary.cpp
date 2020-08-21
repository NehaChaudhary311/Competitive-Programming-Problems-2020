/*

Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

*/

class Solution {
public:
    string addBinary(string a, string b) {
         int carry = 0;
        string s;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0 || j>=0)
        {
            int x = (i >= 0) ? a[i--] - '0' : 0; // converting the character to a number
            int y = (j >= 0) ? b[j--] - '0' : 0;
            int sum = x + y + carry;
            s.append(to_string(sum%2)); //because if sum == 2, I should only append 0
            carry = sum/2;// because if sum == 2, then my carry would be 1
        }
        if(carry>0)
               s.append(to_string(1));
        reverse(s.begin() , s.end()); //since we were appending the characters to the string, our answer is in reversed form
        return s;   
    }
};
