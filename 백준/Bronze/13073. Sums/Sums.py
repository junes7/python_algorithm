import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    print(n*(n+1)//2,n*n,n*(n+1))