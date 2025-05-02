import sys
input=lambda:sys.stdin.readline().rstrip()
from itertools import combinations
arr=sorted([int(input()) for _ in range(9)])
for c in combinations(arr,7):
    if sum(c)==100:
        print(*c,sep="\n")
        break