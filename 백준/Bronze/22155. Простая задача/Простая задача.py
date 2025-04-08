import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    condi,iter=map(int,input().split())
    print("Yes" if condi<=2 and iter<=1 or condi<=1 and iter<=2 else "No")