import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,n=map(int,input().split())
for _ in range(n):
    a=(a%b)*10
    rlt=a//b
print(rlt)