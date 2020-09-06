'''

We are given two sentences A and B.  (A sentence is a string of space separated words.  Each word consists only of lowercase letters.)
A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.
Return a list of all uncommon words. 
You may return the list in any order.

Example 1:
Input: A = "this apple is sweet", B = "this apple is sour"
Output: ["sweet","sour"]

Example 2:
Input: A = "apple apple", B = "banana"
Output: ["banana"]

'''

class Solution:
    def uncommonFromSentences(self, A: str, B: str) -> List[str]:
        A = A.split(" ")
        B = B.split(" ")
        ans = []
        for i in range(len(A)):
            if A[i] not in B and A.count(A[i]) == 1:
                ans.append(A[i])
        for i in range(len(B)):
            if B[i] not in A and B.count(B[i]) == 1:
                ans.append(B[i])
        return ans
        
        
        
