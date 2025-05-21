import sys
input=lambda:sys.stdin.readline().rstrip()
n,t=map(int,input().split())
arr=[*map(int,input().split())]
rlt,cnt=0,0
for i in range(n):
    if rlt+arr[i]>t: break
    cnt+=1
    rlt+=arr[i]
print(cnt)