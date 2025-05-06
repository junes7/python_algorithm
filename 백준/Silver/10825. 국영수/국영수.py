import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[input().split() for _ in range(n)]
arr.sort(key=lambda x:(-int(x[1]),int(x[2]),-int(x[3]),x[0]))
for i in range(n):
    print(arr[i][0])