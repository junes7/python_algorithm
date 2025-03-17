import sys
input=lambda:sys.stdin.readline().rstrip()
N,M,K=map(int,input().split())
for i in range(N):
    for j in range(M):
        if M*i+j==K:
            print(i,j)
            exit(0)