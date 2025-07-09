import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([*map(int,input().split())])
k,minn=2*n,arr[0]+arr[-1]
for i in range(1,n+1):
    if minn>arr[i]+arr[k-(i+1)]:
        minn=arr[i]+arr[k-(i+1)]
print(minn)