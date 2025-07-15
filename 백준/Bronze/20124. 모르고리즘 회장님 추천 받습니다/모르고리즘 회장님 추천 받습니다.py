import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[input().split() for _ in range(int(input()))]
arr.sort(key=lambda x:(-int(x[1]),x[0]))
print(arr[0][0])