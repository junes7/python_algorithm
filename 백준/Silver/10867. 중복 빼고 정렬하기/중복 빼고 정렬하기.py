import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr = [*map(int,input().split())]
arr = sorted(list(set(arr)))
for i in arr:
    print(i,end=' ')