import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
print(n+m if n==m else n+(n+1) if n<m else m+(m+1))