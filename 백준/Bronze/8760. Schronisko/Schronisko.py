import sys
input=lambda:sys.stdin.readline().rstrip()
Z=int(input())
for _ in range(Z):
    W,K=map(int,input().split())
    print(W*K//2)