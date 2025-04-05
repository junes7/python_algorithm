import sys,math
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    a,b=map(float,input().split())
    print(f"{abs(a-b):.1f}")