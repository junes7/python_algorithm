import sys
input=lambda:sys.stdin.readline().rstrip()
n,i=map(int,input().split())
arr=sorted([input() for _ in range(n)])
print(arr[i-1])