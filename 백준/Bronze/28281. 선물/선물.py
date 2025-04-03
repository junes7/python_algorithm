import sys
input=lambda:sys.stdin.readline().rstrip()
n,x=map(int,input().split())
arr=[*map(int,input().split())]
price=[arr[i]*x+arr[i+1]*x for i in range(n-1)]
print(min(price))