import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[int(input()) for _ in range(int(input()))]
rlt=arr[-1]
if arr[1]-arr[0]==arr[2]-arr[1]:
    rlt+=arr[1]-arr[0]
elif arr[1]//arr[0]==arr[2]//arr[1]:
    rlt*=arr[1]//arr[0]
print(rlt)