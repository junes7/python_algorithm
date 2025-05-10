import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([*map(int,input().split())])
minn=float("INF")
for i in range(n-2):
    s,e=i+1,n-1
    while s<e:
        take=arr[i]+arr[s]+arr[e]
        if minn>abs(take):
            minn=abs(take)
            rlt=[arr[i],arr[s],arr[e]]
        if take<0:
            s+=1
        else:
            e-=1
print(*rlt)