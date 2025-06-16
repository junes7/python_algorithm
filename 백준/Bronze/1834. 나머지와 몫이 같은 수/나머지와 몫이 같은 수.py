import sys
input=lambda:sys.stdin.readline().rstrip()
n,rlt=int(input()),0
for i in range(1,n):
    rlt+=(n+1)*i;
print(rlt)