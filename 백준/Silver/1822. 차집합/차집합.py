import sys
input=lambda:sys.stdin.readline().rstrip()
na,nb=map(int,input().split())
a=set([*map(int,input().split())])
b=set([*map(int,input().split())])
rlt=sorted(a-b)
print(len(rlt))
print(*rlt)