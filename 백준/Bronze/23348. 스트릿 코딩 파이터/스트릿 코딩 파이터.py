import sys
input=lambda:sys.stdin.readline().rstrip()
t=[*map(int,input().split())]
n=int(input())
rlt=[0]*n
for i in range(n):
    for _ in range(3):
        a,b,c=map(int,input().split())
        rlt[i]+=t[0]*a+t[1]*b+t[2]*c
print(max(rlt))