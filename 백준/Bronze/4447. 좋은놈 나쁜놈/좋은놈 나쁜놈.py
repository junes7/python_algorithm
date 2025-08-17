import sys
input=lambda:sys.stdin.readline().rstrip()
from collections import Counter
N = int(input())
for _ in range(N):
    S = input()
    cnt = 0
    for i in Counter(S):
        if i.lower() == 'g':
            cnt += Counter(S)[i]
        elif i.lower() == 'b':
            cnt -= Counter(S)[i]
    if cnt > 0:
        print(S + " is GOOD")
    elif cnt == 0:
        print(S + " is NEUTRAL")
    elif cnt < 0:
        print(S + " is A BADDY")