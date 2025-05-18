import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
helmets=[*map(int,input().split())]
vests=[*map(int,input().split())]
print(max(helmets)+max(vests))