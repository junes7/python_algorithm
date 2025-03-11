import sys
input=lambda:sys.stdin.readline().rstrip()
mii=lambda:map(int,input().split())
n,m=mii()
arr=[*mii()]
start,end=1,max(arr)*m
while start<=end:
    mid=(start+end)//2
    s=0
    for i in arr:
        s+=mid//i
    if s<m:
        start=mid+1
    else:
        end=mid-1
        result=mid
print(result)