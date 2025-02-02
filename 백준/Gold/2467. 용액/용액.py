import sys
n=int(sys.stdin.readline().rstrip())
arr=tuple(map(int,sys.stdin.readline().rstrip().split()))
left,right=0,n-1
rst=abs(arr[left]+arr[right])
rsta=arr[left]
rstb=arr[right]
while left<right:
    temp=arr[left]+arr[right]
    abs_temp=abs(temp)
    if abs_temp<=rst:
        rst=abs_temp
        rsta=arr[left]
        rstb=arr[right]
    if temp<0:
        left+=1
    else:
        right-=1
print(rsta,rstb)