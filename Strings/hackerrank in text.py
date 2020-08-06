'''
We say that a string contains the word hackerrank if a subsequence of its characters spell the word hackerrank.

INPUT :
2
hereiamstackerrank
hackerworld

OUTPUT: 
YES
NO
'''

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hackerrankInString function below.
def hackerrankInString(s):
    a="hackerrank"
    c=0
    for i in s:
        if i==a[c]:
            c = c+ 1
        if c>=10:
            break
    if c==10:
        return "YES"
    else:
        return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = hackerrankInString(s)

        fptr.write(result + '\n')

    fptr.close()
