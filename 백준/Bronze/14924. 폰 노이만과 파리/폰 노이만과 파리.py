import sys
input=lambda:sys.stdin.readline().rstrip()
s,t,d=map(int,input().split())
print(d//(s*2)*t)