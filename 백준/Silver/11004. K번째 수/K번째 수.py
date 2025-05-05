import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
arr=sorted([*map(int,input().split())])
print(arr[k-1])