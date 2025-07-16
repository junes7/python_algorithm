import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([*map(int,input().split())])
print(arr[0],arr[1],arr[-1]-arr[0]-arr[1])