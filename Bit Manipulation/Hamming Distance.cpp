/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:
Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x^y;
        int count = 0;
        while(temp){
            int x = temp%2;
            if(x ==  1)
                count++;
            temp = temp/2;
        }
        return count;
    }
};
