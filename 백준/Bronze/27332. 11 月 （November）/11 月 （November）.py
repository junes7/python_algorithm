import sys
input=lambda:sys.stdin.readline().rstrip()
A=int(input())
B=int(input())
print(1 if A+7*B<=30 else 0)