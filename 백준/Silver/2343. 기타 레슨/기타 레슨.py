import sys
mii=lambda:map(int,sys.stdin.readline().rstrip().split())
n,m=mii()
disc=list(mii())
left,right=max(disc),sum(disc)
while left<=right:
    mid=(left+right)//2
    cnt,total=1,0
    for d in disc:
        if total+d<=mid:
            total+=d
        else:
            total=d
            cnt+=1
    if m<cnt:
        left=mid+1
    else:
        right=mid-1
print(left)