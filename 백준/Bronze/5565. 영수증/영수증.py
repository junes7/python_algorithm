import sys
input=lambda:sys.stdin.readline().rstrip()
total,s=int(input()),0
for _ in range(9):
    s+=int(input())
print(total-s)