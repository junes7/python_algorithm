import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
arr=[*map(int,input().split())]
cnt=0
for i in range(n):
    for j in range(n-1-i):
        if arr[j]>arr[j+1]:
            if cnt==k-1:
                print(arr[j+1],arr[j])
                exit(0)
            cnt+=1
            temp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=temp
print(-1)