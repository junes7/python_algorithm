import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
t=sorted([*map(int,input().split())]+[*map(int,input().split())])
print(*t,sep=' ')