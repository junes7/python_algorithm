import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
arr =sorted([*map(int, input().split())])
print(arr[(n - 1) // 2])