import sys
input=lambda:sys.stdin.readline().rstrip()
T1,T2=map(int,input().split())
print(T1 if T1<=T2 else T2)