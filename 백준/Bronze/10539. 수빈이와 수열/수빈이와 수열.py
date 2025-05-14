import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
rlt=[arr[0]]
for i in range(1,n):
    rlt+=[arr[i]*(i+1)-sum(rlt)]
print(*rlt)