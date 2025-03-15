import sys
input=lambda:sys.stdin.readline().rstrip()
n,cnt=int(input()),0
for _ in range(n):
    d=int(input())
    if d%2==1:
        cnt+=1
print(cnt)