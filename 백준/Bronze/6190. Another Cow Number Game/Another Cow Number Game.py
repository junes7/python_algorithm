import sys
input=lambda:sys.stdin.readline().rstrip()
n,cnt=int(input()),0
while n>1:
    n=n//2 if n%2==0 else 3*n+1
    cnt+=1
print(cnt)