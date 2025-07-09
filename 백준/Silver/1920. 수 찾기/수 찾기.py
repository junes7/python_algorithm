import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
A=set([*map(int,input().split())])
m=int(input())
arr=[*map(int,input().split())]
for c in arr:
    print(1 if c in A else 0)