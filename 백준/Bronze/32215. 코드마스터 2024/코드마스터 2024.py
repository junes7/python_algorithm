import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k=map(int,input().split())
print(k*m+m)