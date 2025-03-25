import sys
input=lambda:sys.stdin.readline().rstrip()
A,B=map(int,input().split())
print(min(A//2,B))