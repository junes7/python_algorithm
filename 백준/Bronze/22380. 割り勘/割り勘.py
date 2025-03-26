import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    N,M=map(int,input().split())
    if N==0 and M==0: break
    s=0
    arr=[*map(int,input().split())]
    for i in range(N):
        s+=M//N if arr[i]>=M//N else arr[i]
    print(s)