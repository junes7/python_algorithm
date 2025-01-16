n,t=int(input()),0
num=list(map(int,input().split()))
for i in range(n):
    cnt,d=0,1
    while d<=num[i]:
        if num[i]%d==0:
            cnt+=1
        d+=1
    if cnt==2:
        t+=1
print(t)