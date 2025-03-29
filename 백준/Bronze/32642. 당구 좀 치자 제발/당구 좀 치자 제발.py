import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
ang,rlt=0,[]
for i in range(n):
    ang=ang-1 if arr[i]==0 else ang+1
    rlt+=[ang]
print(sum(rlt))