import sys
input=lambda:sys.stdin.readline().rstrip()
print(sorted([*map(int,input().split())])[1])