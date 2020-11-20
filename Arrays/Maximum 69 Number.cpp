/*
Given a positive integer num consisting only of digits 6 and 9.
Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

Example 1:

Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666. 
The maximum number is 9969.
*/

//APPROACH 1 : Naive - Convert int to string and perform modification
class Solution {
public:
    int maximum69Number (int num) {
        stack<int> stk;
        string num1 = to_string(num);
        int len = num1.length();
        for(int i = 0; i<len; i++){
            if(num1[i] == '6'){
                num1[i] = '9';
                break;
            }    
        }
        return stoi(num1);
        
    }
};

//APPROACH 2: 
class Solution {
public:
    int maximum69Number (int num) {
        stack<int> stk;
        int temp = num;
        int i = 0, idx = -1;
        
        while (temp) {
            if (temp%10 == 6) {
                idx = i;
            }
            i++;
            temp/=10;
        }
        
        if (idx == -1)
            return num;
        
        return num + pow(10, idx)*3;
        
    }
};
