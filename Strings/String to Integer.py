#Using regex 
#Refer String to Integer.cpp in this folder 
#https://leetcode.com/problems/string-to-integer-atoi/

class Solution:
    def myAtoi(self, str: str) -> int:
        str = str.strip()
        result = re.findall(r"^[-+]?[\d]+", str)
        if not result:
            return 0
        elif int(result[0]) < -2**31:
            return -2**31
        elif int(result[0]) > 2**31-1:
            return 2**31-1
        else:
            return int(result[0])
