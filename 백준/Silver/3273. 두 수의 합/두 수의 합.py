import sys
n=int(sys.stdin.readline().rstrip())
arr=list(map(int,sys.stdin.readline().rstrip().split()))
x=int(sys.stdin.readline().rstrip())
arr.sort()
left,right,sum_arr,cnt=0,n-1,0,0
while True:
    if left==right:
        break
    sum_arr=arr[left]+arr[right]
    if sum_arr<=x:
        if sum_arr==x:
            cnt+=1
        sum_arr-=arr[left]
        left+=1
    else:
        sum_arr-=arr[right]
        right-=1
print(cnt)