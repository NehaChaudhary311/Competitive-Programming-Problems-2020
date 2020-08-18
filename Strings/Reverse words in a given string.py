/*

Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr
*/

test  = int(input())
lines = []
while test>0:
    user_input_line = input().split('.')
    user_input_line.reverse()
    print(".".join(user_input_line))
    test = test-1
