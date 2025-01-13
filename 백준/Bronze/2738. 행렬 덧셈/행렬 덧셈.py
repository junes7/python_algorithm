n,m=map(int,input().split())
num=[[0]*m for i in range(n)]
for i in range(2):
    for j in range(n):
        t=list(map(int,input().split()))
        for k in range(m):
            num[j][k]+=t[k]
for i in range(n):
    for j in range(m):
        print(num[i][j],end=' ')
    print()