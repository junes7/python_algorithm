import sys
input=lambda:sys.stdin.readline().rstrip()
n,k,a,b=map(int,input().split())
print((n+k-2)*b,(n-1)*a)