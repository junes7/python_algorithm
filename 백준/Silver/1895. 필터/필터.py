import sys
input=lambda:sys.stdin.readline().rstrip()
R,C=map(int,input().split())
arr=[[*map(int,input().split())] for _ in range(R)]
T=int(input())
filter=[]
for r in range(R-3+1):
    for c in range(C-3+1):
        temp=[]
        for i in range(r,r+3):
            for j in range(c,c+3):
                temp+=[arr[i][j]]
        temp.sort()
        filter+=[temp[4]]
cnt=0
for k in filter:
    if k>T or k==T:
        cnt+=1
print(cnt)