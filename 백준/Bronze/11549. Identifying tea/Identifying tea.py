import sys
input=lambda:sys.stdin.readline().rstrip()
t,cnt=int(input()),0
arr=[*map(int,input().split())]
for i in range(5):
    if t==arr[i]:
        cnt+=1
print(cnt)