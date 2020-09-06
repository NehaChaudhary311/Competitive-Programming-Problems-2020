'''
Given words first and second, consider occurrences in some text of the form "first second third", where second comes immediately after first, and third comes immediately after second.
For each such occurrence, add "third" to the answer, and return the answer.
Example 1:
Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
Output: ["girl","student"]

Example 2:
Input: text = "we will we will rock you", first = "we", second = "will"
Output: ["we","rock"]

'''

class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        text = text.split(' ')
        n = len(text)
        x = 0
        ans = []
        while x < n-2:
            if text[x] == first and text[x+1] == second:
                ans.append(text[x+2])
            x += 1
        return ans
