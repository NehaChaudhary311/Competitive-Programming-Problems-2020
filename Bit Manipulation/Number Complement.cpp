/*
Given a positive integer num, output its complement number. The complement strategy is to flip the bits of its binary representation.

Example 1:
Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
*/
class Solution {
public:
    int findComplement(int num) {
        long int x = 1;
        while(x <= num)
            x = x*2;
        return x-1-num;
    }
};
