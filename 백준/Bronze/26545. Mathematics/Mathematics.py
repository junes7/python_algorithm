import sys
input=lambda:sys.stdin.readline().rstrip()
n,s=int(input()),0
for _ in range(n):
    s+=int(input())
print(s)