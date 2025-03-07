import sys
input=lambda:sys.stdin.readline().rstrip()
A,B,C=map(int,input().split())
print((B//A)*3*C)