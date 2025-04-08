import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
print(n-7 if n>=8 else m+7)