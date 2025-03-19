import sys
input=lambda:sys.stdin.readline().rstrip()
n,s=int(input()),0
isTrain=[*map(int,input().split())]
for i in range(n):
    x,y=map(int,input().split())
    if isTrain[i]:
        s+=y-x if y>x else 0
print(s)