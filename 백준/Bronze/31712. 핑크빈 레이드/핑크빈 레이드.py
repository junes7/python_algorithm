import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([[*map(int,input().split())] for _ in range(3)])
tar,time=int(input()),0
while 1:
    for s in arr:
        if time%s[0]==0:
            tar-=s[1]
    if tar<=0:
        break
    else:
        time+=1
print(time)