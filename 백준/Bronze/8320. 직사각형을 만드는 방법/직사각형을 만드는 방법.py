import sys
input=lambda:sys.stdin.readline().rstrip()
n,rlt=int(input()),0
for i in range(1,n+1):
    for j in range(i,n//i+1):
        rlt+=1
print(rlt)