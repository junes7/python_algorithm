import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=sorted([*map(int,input().split())])
    if arr[-2]-arr[1]>=4:
        print("KIN")
    else:
        print(sum(arr[1:-1]))