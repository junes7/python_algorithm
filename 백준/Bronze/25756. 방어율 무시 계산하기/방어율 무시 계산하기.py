import sys
input=lambda:sys.stdin.readline().rstrip()
n,v=int(input()),0
arr=[*map(int,input().split())]
for i in range(n):
    v=(1-(1-v/100)*(1-arr[i]/100))*100
    print(round(v,6))