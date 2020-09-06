'''
Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates). 
For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.

Example 1:
Input: ["bella","label","roller"]
Output: ["e","l","l"]

Example 2:
Input: ["cool","lock","cook"]
Output: ["c","o"]
'''

class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        # result, list of all letters in common in all strings.
        result = []
        # go through all letters of a given word, check if any letters exist in all other words.
        for letter in A[0]:
            # flag to check if letter appears in all words.
            flag = True
            # check all words for current letter.
            for i in range(len(A)):
                if letter not in A[i]:
                    flag = False
                    break
                # remove each letter after checking to avoid false duplicates.
                A[i] = A[i].replace(letter, "", 1)
            if flag == True:
                result.append(letter)
        # return result.
        return result
