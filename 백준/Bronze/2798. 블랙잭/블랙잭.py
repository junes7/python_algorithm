import sys
from itertools import combinations
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
cards=[*map(int,input().split())]
max_sum=0
for combo in combinations(cards,3):
    cur_sum=sum(combo)
    if cur_sum<=m:
        max_sum=max(max_sum,cur_sum)
print(max_sum)