import sys
mii=lambda:map(int,sys.stdin.readline().rstrip().split())
n,s=mii()
arr=list(mii())
start,end,sum_arr,length=0,0,arr[0],n+1
while True:
    if sum_arr<s:
        end+=1
        if end==n:
            break
        sum_arr+=arr[end]
    else:
        length=min(length,end-start+1)
        sum_arr-=arr[start]
        start+=1
print(0 if length==n+1 else length)