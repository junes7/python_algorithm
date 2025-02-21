import sys
input=lambda:sys.stdin.readline().rstrip()
def find_max_length(k,n,cables):
    start,end=1,max(cables)
    while start<=end:
        mid,cnt=(start+end)//2,0
        for cable in cables:
            cnt+=cable//mid
        if cnt<n:
            end=mid-1
        else:
            start=mid+1
    return end
k,n=map(int,input().split())
cables=[int(input()) for _ in range(k)]
print(find_max_length(k,n,cables))