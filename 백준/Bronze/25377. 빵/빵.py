import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
time=1001
for _ in range(n):
    a,b=map(int,input().split())
    if a<=b and b<time:
        time=b
print(-1 if time==1001 else time)