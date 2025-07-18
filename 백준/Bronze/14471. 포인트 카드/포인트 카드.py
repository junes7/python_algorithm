import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
arr=sorted([[*map(int,input().split())] for _ in range(m)],key=lambda x:-x[0])
rlt=0
for i in range(m-1):
    if arr[i][0]>=n:
        continue
    rlt+=n-arr[i][0]
print(rlt)