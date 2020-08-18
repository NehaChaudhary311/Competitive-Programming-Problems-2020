def DoQuery(N, M, Words,Q, OneQuery):
    count = 0
    #for each word in the Words list
    for i in range(len(Words)):
        word = Words[i]
        #compare each letter to the query
        match = True
        for j in range(len(Words)):
            wordLetter = word[j]
            queryLetter = OneQuery[j]
            #if the letters do not match and are not ?, then skip to next word
            if queryLetter != '?' and queryLetter != wordLetter:
                match = False
                break
        #if we did not skip, the words match. Increase the count
        if match == True:
            count = count + 1
    #we have now checked all the words, return the count
    return count

N, M = map(int , input().split())
Words = []
for _ in range(N):
    Words.append(input())

Q = int(input())
Query = []
for _ in range(Q):
    Query.append(input())

out =  DoQuery(N, M, Words, Q, Query)
for x in range(out):
    print(x)
