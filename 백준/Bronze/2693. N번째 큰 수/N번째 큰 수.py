import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=sorted([*map(int,input().split())],reverse=True)
    print(arr[2])