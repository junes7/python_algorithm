import sys
n=int(sys.stdin.readline().rstrip())
arr=list(map(int,sys.stdin.readline().rstrip().split()))
arr.sort()
left,right=0,n-1
rst=abs(arr[left]+arr[right])
rsta=arr[left]
rstb=arr[right]
while left<right:
    temp=arr[left]+arr[right]
    if abs(temp)<rst:
        rst=abs(temp)
        rsta=arr[left]
        rstb=arr[right]
    if temp>0:
        right-=1
    else:
        left+=1
print(rsta,rstb)