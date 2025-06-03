import sys
input=lambda:sys.stdin.readline().rstrip()
x,n=map(int,input().split())
for _ in range(n):
    x=(x//2 if x%2==0 else 2*x)^6
print(x)