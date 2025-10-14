import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
costs = list(map(int,input().split()))
print(sum(costs)-max(costs))