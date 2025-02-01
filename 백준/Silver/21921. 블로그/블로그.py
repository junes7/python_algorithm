import sys
n,x=map(int,sys.stdin.readline().rstrip().split())
arr=list(map(int,sys.stdin.readline().rstrip().split()))
sw=sum(arr[:x])
max_sum=sw
max_cnt=1
for i in range(x,n):
    sw-=arr[i-x]
    sw+=arr[i]
    if max_sum==sw:
        max_cnt+=1
    elif max_sum<sw:
        max_sum=sw
        max_cnt=1
if max_sum==0:
    print("SAD")
else:
    print(max_sum,max_cnt,sep="\n")