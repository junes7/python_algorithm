import sys
input=lambda:sys.stdin.readline().rstrip()
n,s=int(input()),0
for i in range(1,n+1):
    s+=i**3
print(s)