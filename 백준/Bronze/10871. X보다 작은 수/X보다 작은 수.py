n,x=map(int,input().split())
t=list(map(int,input().split()))
for i in range(n):
    if t[i]<x:
        print(t[i],end=' ')