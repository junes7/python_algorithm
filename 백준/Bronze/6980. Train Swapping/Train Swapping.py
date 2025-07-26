import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,rlt=int(input()),0
    arr=[*map(int,input().split())]
    for i in range(n-1):
        for j in range(i+1,n):
            if arr[i]>arr[j]:
                rlt+=1
    print("Optimal train swapping takes %d swaps." % rlt)