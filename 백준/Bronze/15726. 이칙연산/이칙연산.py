import sys
input=lambda:sys.stdin.readline().rstrip()
A,B,C=map(int,input().split())
r1=A*B/C
r2=A/B*C
print(int(r1 if r1>r2 else r2))