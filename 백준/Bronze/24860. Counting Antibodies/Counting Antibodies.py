import sys
input=lambda:sys.stdin.readline().rstrip()
k=[*map(int,input().split())]
e=[*map(int,input().split())]
h=[*map(int,input().split())]
print((k[0]*k[1]+e[0]*e[1])*h[0]*h[1]*h[2])