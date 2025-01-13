n,cnt=int(input()),0
mat=[[0]*100 for i in range(100)]
for i in range(n):
    xst,yst=map(int,input().split())
    for j in range(yst,yst+10):
        for k in range(xst,xst+10):
            if mat[j][k]==0:
                mat[j][k]=1
for i in range(100):
    for j in range(100):
        if mat[i][j]==1:
            cnt+=1
print(cnt)