import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
arr,rlt=[*map(int,input().split())],[]
for i in range(1,n+1):
    for j in range(m):
        if i%arr[j]==0 and i not in rlt:
            rlt+=[i]
print(sum(rlt))