import sys
input=lambda:sys.stdin.readline().rstrip()
k=int(input())
arr=[[1]*10 for _ in range(10)]
for i in range(k):
    lines=[*map(int,input().split())]
    rows,cols=lines[:3],lines[3:]
    for j in range(10):
        for k in range(10):
            if j+1 in rows:
                arr[j][k]=1
            elif k+1 in cols:
                arr[j][k]=1
            else:
                arr[j][k]+=1
for i in range(10):
    print(*arr[i])