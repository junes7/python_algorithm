import sys
input=lambda:sys.stdin.readline().rstrip()
from itertools import combinations
n=int(input())
arr=sorted([*map(int,input().split())])
odd,even=[],[]
for c in combinations(arr,2):
    t=c[1]-c[0]
    if t%2==0:
        even+=[t]
    else:
        odd+=[t]
print(min(even) if len(even) else -1,min(odd) if len(odd) else -1)