import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[[*map(int,input().split())] for _ in range(n)]
arr.sort(key=lambda x:x[1])
print(*arr[0])