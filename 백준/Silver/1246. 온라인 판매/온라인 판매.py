import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
arr=sorted([int(input()) for _ in range(m)])
rlt,a=0,0
for i in range(m):
    cnt=m-i
    total=(n if n<=cnt else cnt)*arr[i]
    if rlt<total:
        rlt=total
        a=arr[i]
print(a,rlt)