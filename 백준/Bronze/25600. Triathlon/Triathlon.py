import sys
input=lambda:sys.stdin.readline().rstrip()
N=int(input())
s=[]
for _ in range(N):
    a,d,g=map(int,input().split())
    s+=[(a*(d+g))*(2 if a==d+g else 1)]
print(max(s))