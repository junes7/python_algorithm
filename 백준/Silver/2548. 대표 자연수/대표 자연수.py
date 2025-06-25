import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
l = sorted([*map(int, input().split())])
mid = len(l)//2 if len(l)%2!=0 else (len(l)//2)-1
print(l[mid])