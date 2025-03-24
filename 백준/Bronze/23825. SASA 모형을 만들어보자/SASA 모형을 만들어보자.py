import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
print(n//2 if n<m else m//2)