import sys
input=lambda:sys.stdin.readline().rstrip()
n,d=map(int,input().split())
arr=[int(input()) for _ in range(n)]
p=d//sum(arr)
for i in range(n):
    print(arr[i]*p)