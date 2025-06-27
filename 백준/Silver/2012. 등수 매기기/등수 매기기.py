import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
rank=sorted([int(input()) for _ in range(n)])
rlt=0
for i in range(1,n+1):
    rlt+=abs(i-rank[i-1])
print(rlt)