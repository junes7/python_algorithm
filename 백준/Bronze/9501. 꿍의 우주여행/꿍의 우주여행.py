import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,d=map(int,input().split())
    cnt=0
    for _ in range(n):
        vi,fi,ci=map(int,input().split())
        if vi*(fi/ci)>=d:
            cnt+=1
    print(cnt)