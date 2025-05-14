import sys
input=lambda:sys.stdin.readline().rstrip()
n,t,c,p=map(int,input().split())
print((n-1)//t*c*p)