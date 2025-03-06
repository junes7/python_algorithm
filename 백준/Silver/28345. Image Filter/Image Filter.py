import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
for _ in range(t):
    rlt=[]
    r,c=map(int,input().split())
    arr=[list(map(int,input().split())) for _ in range(r)]
    for i in range(r):
        rlt.append([])
        for j in range(c):
            temp,minn,A,B,C=[],float("INF"),0,0,0
            if i==0 and j>0:
                A=arr[i][j-1]
            elif i>0 and j==0:
                B=arr[i-1][j]
            elif i>0 and j>0:
                A=arr[i][j-1]
                B=arr[i-1][j]
                C=arr[i-1][j-1]
            temp+=[arr[i][j]-0,arr[i][j]-A,arr[i][j]-B,arr[i][j]-(A+B)//2,arr[i][j]-(A+B-C)]
            for k in temp:
                if minn>abs(k):
                    minn=abs(k)
            for l,k in enumerate(temp):
                if minn==abs(k):
                    rlt[i].append(l)
                    rlt[i].append(k)
                    break
    for i in range(r):
        print(*rlt[i])