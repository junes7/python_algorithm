import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
print(sum(arr)-min(arr))