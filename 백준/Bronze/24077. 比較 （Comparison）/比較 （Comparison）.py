import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
a=[*map(int,input().split())]
b=[*map(int,input().split())]
cnt=0
for i in range(n):
    for j in range(m):
        if a[i]<=b[j]:
            cnt+=1
print(cnt)