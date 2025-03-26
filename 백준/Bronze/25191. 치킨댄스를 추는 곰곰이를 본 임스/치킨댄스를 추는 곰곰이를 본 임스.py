import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
a,b=map(int,input().split())
print(a//2+b if a//2+b<=n else n)