import sys
input=lambda:sys.stdin.readline().rstrip()
x,y=map(int,input().split())
r=int(input())
print(f"{x-r} {y+r}\n{x+r} {y+r}\n{x+r} {y-r}\n{x-r} {y-r}")