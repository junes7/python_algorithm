import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
# 세로
for i in range(N*4):
    print('@'*N)
# 가로
for i in range(N):
    print('@'*5*N)