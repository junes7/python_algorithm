import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k=map(int,input().split())
fr=[m,n-m]
bk=[k,n-k]
print(min(fr[0],bk[0])+min(fr[1],bk[1]))