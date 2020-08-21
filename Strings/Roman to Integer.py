'''
Example 1:
Input: "III"
Output: 3

Example 2:
Input: "IV"
Output: 4

Example 3:
Input: "IX"
Output: 9

Example 4:
Input: "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

'''

class Solution:
    def romanToInt(self, s: str) -> int:
        sums=0
        d={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        for i in range(len(s)-1):
            if d[s[i]]>=d[s[i+1]]:
                sums+=d[s[i]]
            else:
                sums-= d[s[i]]
        sums+=d[s[len(s)-1]]
        return sums
