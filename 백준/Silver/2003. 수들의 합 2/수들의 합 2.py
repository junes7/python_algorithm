import sys
n,m=map(int,sys.stdin.readline().rstrip().split())
arr=list(map(int,sys.stdin.readline().rstrip().split()))
start,end,sum_arr,cnt=0,0,0,0
while True:
    if m<sum_arr:
        sum_arr-=arr[start]
        start+=1
    else:
        if end==n:
            break
        sum_arr+=arr[end]
        end+=1
    if m==sum_arr:
        cnt+=1
print(cnt)