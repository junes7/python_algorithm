import sys
n=int(sys.stdin.readline().rstrip())
if n==1:
    print(0)
    exit(0)
prime=[True]*(n+1)
prime[0],prime[1],arr=False,False,[]
for i in range(2,n+1):
    if prime[i]:
        arr+=[i]
        for j in range(i*2,n+1,i):
            prime[j]=False
left,right,sum_arr,cnt=0,0,arr[0],0
while left<=right:
    if sum_arr<=n:
        if sum_arr==n:
            cnt+=1
        right+=1
        if right==len(arr):
            break
        sum_arr+=arr[right]
    elif sum_arr>n:
        sum_arr-=arr[left]
        left+=1
print(cnt)