import sys
input=lambda:sys.stdin.readline().rstrip()
n,x=map(int,input().split())
maxn=-1
for _ in range(n):
    s,t=map(int,input().split())
    if s+t<=x:
        if maxn<s:
            maxn=s;
print(maxn)