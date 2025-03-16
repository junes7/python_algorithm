import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
for _ in range(n):
    st=input()
    print(st[::-1])