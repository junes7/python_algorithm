import sys
input=lambda:sys.stdin.readline().strip()
for _ in range(int(input())):
    d,n,s,p=map(int,input().split())
    print("does not matter" if n*s==d+n*p else "parallelize" if n*s>d+n*p else "do not parallelize")