import sys
input=lambda:sys.stdin.readline().rstrip()
A=int(input())
W,V=map(int,input().split())
print(1 if W//V>=A else 0)