import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(n):
    x,y=map(int,input().split())
    print(x+y)