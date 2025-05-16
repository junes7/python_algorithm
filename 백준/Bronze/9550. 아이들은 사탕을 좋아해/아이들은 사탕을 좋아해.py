import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,k=map(int,input().split())
    cnt=0
    arr=[*map(int,input().split())]
    for i in range(n):
        cnt+=arr[i]//k
    print(cnt)