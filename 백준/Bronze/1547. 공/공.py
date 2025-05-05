import sys
input=lambda:sys.stdin.readline().rstrip()
cups=[0,1,2,3]
for _ in range(int(input())):
    x,y=map(int,input().split())
    cups[x],cups[y]=cups[y],cups[x];
print(cups.index(1))