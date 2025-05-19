import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
while n>=1:
    print(n,end=' ')
    if n==1: break
    n=n//2 if n%2==0 else n*3+1