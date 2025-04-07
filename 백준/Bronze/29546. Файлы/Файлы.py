import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[input() for _ in range(int(input()))]
for _ in range(int(input())):
    x,y=map(int,input().split())
    for i in range(x-1,y):
        print(arr[i])