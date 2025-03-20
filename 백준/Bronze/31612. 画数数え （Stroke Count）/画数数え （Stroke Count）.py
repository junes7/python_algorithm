import sys
input=lambda:sys.stdin.readline().rstrip()
n,s=int(input()),0
for c in input():
    s+=2 if c=='j' or c=='i' else 1
print(s)