import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([int(input()) for _ in range(n)],reverse=True)
rlt=[arr[i] for i in range(2,n,3)]
print(sum(arr)-sum(rlt))