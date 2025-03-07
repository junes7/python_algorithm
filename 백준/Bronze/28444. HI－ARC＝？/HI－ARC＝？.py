import sys
input=lambda:sys.stdin.readline().rstrip()
H,I,A,R,C=map(int,input().split())
print(H*I-A*R*C)