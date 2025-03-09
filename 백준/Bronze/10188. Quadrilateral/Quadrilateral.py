import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    x,y=map(int,input().split())
    for _ in range(y):
        print("X"*x)
    print()