import sys
input=lambda:sys.stdin.readline().rstrip()
k,n,m=map(int,input().split())
print(0 if k*n-m<0 else k*n-m)