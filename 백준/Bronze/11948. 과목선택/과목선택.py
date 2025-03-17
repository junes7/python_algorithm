import sys
from itertools import combinations
input=lambda:sys.stdin.readline().rstrip()
sci=[int(input()) for _ in range(4)]
hist=[int(input()) for _ in range(2)]
total=0
for s in combinations(sci,3):
    for h in combinations(hist,1):
        tem=sum(s)+sum(h)
        if total<tem:
            total=tem
print(total)