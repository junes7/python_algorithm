import sys
input=lambda:sys.stdin.readline().rstrip()
A,P,C=map(int,input().split())
maxn=A+C if A+C>P else P
print(maxn)