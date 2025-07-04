import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([*map(int,input().split())],reverse=True)
for i in range(n):
    arr[i]-=(n-1-i)
print(n+max(arr)+1)