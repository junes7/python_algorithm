import sys,math
input=lambda:sys.stdin.readline().rstrip()
x,y=map(int,input().split())
print(math.ceil(x*y/4840/5))