import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([int(input()) for _ in range(n)])
minn=float("INF")
for i in range(n):
    cnt=0
    for j in range(arr[i],arr[i]+5):
        if j not in arr:
            cnt+=1
    minn=min(minn,cnt)
print(minn)