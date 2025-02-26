import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
print(n//m,n%m,sep="\n")