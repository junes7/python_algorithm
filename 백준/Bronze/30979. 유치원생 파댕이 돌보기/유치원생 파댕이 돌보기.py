import sys
input=lambda:sys.stdin.readline().rstrip()
T=int(input())
N=int(input())
arr=[*map(int,input().split())]
print("Padaeng_i Happy" if sum(arr)>=T else "Padaeng_i Cry")