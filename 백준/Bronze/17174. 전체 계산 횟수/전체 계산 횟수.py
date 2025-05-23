import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
total=n
while n>=m:
    total+=n//m
    n//=m
print(total)