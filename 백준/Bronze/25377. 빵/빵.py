import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
time,rlt=1000,0
for _ in range(n):
    a,b=map(int,input().split())
    if a>b:
        continue
    if abs(b-a)<time:
        time=b-a
        rlt=b
print(-1 if rlt==0 else rlt)