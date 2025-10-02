import sys
input=lambda:sys.stdin.readline().rstrip()
m,n=map(int,input().split())
if m>n: print(n*2-1)
else: print(m*2-2)