//It doesn't work the for input :""  0000000000012345678"
      
/*
Implement atoi which converts a string to an integer.

The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.
Example 1:
Input: "42"
Output: 42

Example 2:
Input: "   -42"
Output: -42
Explanation: The first non-whitespace character is '-', which is the minus sign.
             Then take as many numerical digits as possible, which gets 42.

Example 3:
Input: "4193 with words"
Output: 4193
Explanation: Conversion stops at digit '3' as the next character is not a numerical digit.

Example 4:
Input: "words and 987"
Output: 0
Explanation: The first non-whitespace character is 'w', which is not a numerical 
             digit or a +/- sign. Therefore no valid conversion could be performed.
             
Example 5:
Input: "-91283472332"
Output: -2147483648
Explanation: The number "-91283472332" is out of the range of a 32-bit signed integer.
             Thefore INT_MIN (−231) is returned.
*/

class Solution {
public:
    int myAtoi(string str) {
        int len = str.length();
        vector<int> x;
        int flag = 1;
        if(str[0] == '-')
            flag = -1;
        for(int i = 0; i< len ; i++){
            if(isalpha(str[i]))
                break;
            if(str[i] == '.'){
                    break;
            }
            if(isdigit(str[i])){
                
                //Input : "        -42"
                if(i > 0){
                    if(str[i-1] == '-')
                    flag = -1;
                }
                
                int temp = (int)str[i];
                temp = temp - 48;
                x.push_back(temp);
            }
        }
        int xsize = x.size();
        int ans = 0;
        int unit = 1;
        for(int i = xsize-1; i>=0 ; i--){
            ans += x[i]*unit;
             //Checking for Input : "-91283472332"
            //The ans will get out of range of a 32 bit signed integer.
            if(unit >= 1000000000){
                return -2147483648;
            }
            unit *= 10;
        }
        if(flag == -1)
            ans = -ans;
        else
            ans;
        return ans;
        
    }
};
