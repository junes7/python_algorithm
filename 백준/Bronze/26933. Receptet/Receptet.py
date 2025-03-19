import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
s=0
for _ in range(n):
    h,b,k=map(int,input().split())
    if b>h:
        s+=(b-h)*k
print(s)