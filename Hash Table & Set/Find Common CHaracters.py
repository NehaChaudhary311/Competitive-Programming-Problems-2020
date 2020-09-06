/*
Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates). 
For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.

Example 1:
Input: ["bella","label","roller"]
Output: ["e","l","l"]

Example 2:
Input: ["cool","lock","cook"]
Output: ["c","o"]
*/

class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        res = []
        i = ord('a')
        for _ in range(i+26):
            c = chr(i)
            for j in range(len(A)):
                if c not in A[j]:
                    i+=1
                    break
            else:
                res.append(c)
                for k in range(len(A)):
                    A[k]=A[k].replace(c,"",1)
        return res
