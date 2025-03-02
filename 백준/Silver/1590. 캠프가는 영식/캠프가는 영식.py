import sys
input=lambda:sys.stdin.readline().rstrip()
n,t=map(int,input().split())
result=[]
for _ in range(n):
    S,I,C=map(int,input().split())
    time=[S+(I*c) for c in range(C)]
    if time[-1]<t: continue
    start,end=0,C-1
    while start<=end:
        mid=(start+end)//2
        if time[mid]>=t:
            ans=mid
            end=mid-1
        else:
            start=mid+1
    result+=[time[ans]-t]
print(min(result) if result else -1)