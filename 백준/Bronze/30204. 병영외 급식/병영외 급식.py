import sys
input=lambda:sys.stdin.readline().strip()
n,x=map(int,input().split())
grp=[*map(int,input().split())]
print(1 if sum(grp)%x==0 else 0)