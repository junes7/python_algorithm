import sys
k,n=map(int,sys.stdin.readline().rstrip().split())
lines=[int(sys.stdin.readline().rstrip()) for _ in range(k)]
start,end=1,max(lines)
while start<=end:
    cnt=0
    mid=(start+end)//2;
    for line in lines:
        cnt+=line//mid
    if cnt<n:
        end=mid-1;
    else:
        start=mid+1;
print(end)