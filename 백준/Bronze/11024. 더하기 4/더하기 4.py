import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=[*map(int,input().split())]
    print(sum(arr))