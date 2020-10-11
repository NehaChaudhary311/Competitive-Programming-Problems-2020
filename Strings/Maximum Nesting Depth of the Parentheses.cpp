/*
Example 1:
Input: s = "(1+(2*3)+((8)/4))+1"
Output: 3
Explanation: Digit 8 is inside of 3 nested parentheses in the string.

Example 2:
Input: s = "(1)+((2))+(((3)))"
Output: 3

*/

class Solution {
public:
    int maxDepth(string s) {
        int max1 = 0;
        int count = 0;
       for(int i = 0; i<s.length(); i++)
       {
           if(s[i] == '(')
           {
               count++;
               max1 = max(count,max1);
           }
           if(s[i] ==')')
               count--;
       }
        return max1;
        
    }
};
