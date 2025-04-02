import sys
input=lambda:sys.stdin.readline().rstrip()
x,n=map(int,input().split())
for _ in range(n):
    if x%2==0:
        x=(x//2)^6
    else:
        x=(2*x)^6
print(x)