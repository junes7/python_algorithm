import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([int(input()) for _ in range(n)],reverse=True)
rlt=-1
for i in range(n-2):
    if arr[i]<arr[i+1]+arr[i+2]:
        rlt=arr[i]+arr[i+1]+arr[i+2]
        break
print(rlt)