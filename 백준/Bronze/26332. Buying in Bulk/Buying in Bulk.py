import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    c,p=map(int,input().split())
    print(c,p)
    print(p if c==1 else p+(c-1)*(p-2))