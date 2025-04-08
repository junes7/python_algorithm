import sys
input=lambda:sys.stdin.readline().rstrip()
k=int(input())
for i in range(1,k+1):
    total=0
    n,s,d=map(int,input().split())
    for _ in range(n):
        di,vi=map(int,input().split())
        if di//s+(0 if di%s==0 else 1)<=d:
            total+=vi
    print(f"Data Set {i}:\n{total}\n")