import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([*map(int,input().split())])
print(1+arr[1]+arr[2]+arr[3])