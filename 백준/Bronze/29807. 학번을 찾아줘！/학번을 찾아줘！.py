import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
arr=[*map(int,input().split())]+[0]*(5-t)
rlt=0
if arr[0]>arr[2]:
    rlt+=(arr[0]-arr[2])*508
else:
    rlt+=(arr[2]-arr[0])*108
if arr[1]>arr[3]:
    rlt+=(arr[1]-arr[3])*212
else:
    rlt+=(arr[3]-arr[1])*305
if arr[4]>0:
    rlt+=arr[4]*707
rlt*=4763
print(rlt)