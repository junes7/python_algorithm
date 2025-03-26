import sys
input=lambda:sys.stdin.readline().rstrip()
T=int(input())
for _ in range(T):
    N,D=map(int,input().split())
    cnt=0
    for _ in range(N):
        vi,fi,ci=map(int,input().split())
        if vi*fi/ci>=D:
            cnt+=1
    print(cnt)