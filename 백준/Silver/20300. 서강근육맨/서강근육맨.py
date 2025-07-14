import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([*map(int,input().split())])
l=n if len(arr)%2==0 else n-1
maxn=0
for i in range(l//2):
    maxn=max(arr[i]+arr[l-1-i],maxn)
print(maxn if len(arr)%2==0 else max(maxn,arr[-1]))