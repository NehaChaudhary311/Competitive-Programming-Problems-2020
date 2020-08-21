'''
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:
Input: "A man, a plan, a canal: Panama"
Output: true

Example 2:
Input: "race a car"
Output: false

'''


class Solution:
    def isPalindrome(self, s: str) -> bool:
        newStr = ''                     
        for i in s:                     
            if i.isalnum():             
                newStr+=i.lower()       
        if newStr[::-1]==newStr:
            return True
        else:
            return False
            
