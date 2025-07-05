import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
for i in range(n-1,-1,-1):
    if arr[i-1]>arr[i]:
        print(i)
        break