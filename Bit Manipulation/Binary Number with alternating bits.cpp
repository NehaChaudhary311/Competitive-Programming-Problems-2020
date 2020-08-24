/*

Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

Example 1:
Input: 5
Output: True
Explanation: The binary representation of 5 is: 101

Example 2:
Input: 7
Output: False
Explanation: The binary representation of 7 is: 111.

*/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> temp;
        while(n > 0){
            int x = n%2;
            temp.push_back(x);
            n = n/2;
        }
        for(int i = 0 ; i<temp.size() -1; i++){
            if(temp[i] == temp[i+1])
                return false;
        }
        return true;
    }
};
