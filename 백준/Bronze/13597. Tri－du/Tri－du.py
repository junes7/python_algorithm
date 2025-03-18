import sys
input=lambda:sys.stdin.readline().rstrip()
A,B=map(int,input().split())
print(A if A>B else B)