from collections import defaultdict 
import functools

def Solve(N, M, Words,Q, Query):
    count = 0
    out = []
    sets = defaultdict(set)
    for word in Words:
        for i, c in enumerate(word):
            sets[i,c].add(word)
    all_words = set(Words)
    for q in Query:
        possible_words = (sets[i,c] for i, c in enumerate(q) if c != "?")
        w = functools.reduce(set.intersection, possible_words, all_words)
        print(len(w))


N, M = map(int , input().split())
Words = []
for _ in range(N):
    Words.append(input())

Q = int(input())
Query = []
for _ in range(Q):
    Query.append(input())

Solve(N, M, Words, Q, Query)
