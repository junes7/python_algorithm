import sys
input=lambda:sys.stdin.readline().rstrip()
p=int(input())
for _ in range(p):
    s=0
    k,n=map(int,input().split())
    for i in range(1,n+1):
        s+=i+1
    print(k,s)