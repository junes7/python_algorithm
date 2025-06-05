import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(1,int(input())+1):
    k,n=map(int,input().split())
    print("%d %d %d %d" % (k,n*(n+1)/2,n*n,n*(n+1)))