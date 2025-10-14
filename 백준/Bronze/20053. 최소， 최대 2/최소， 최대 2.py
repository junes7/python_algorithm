import sys
input=lambda:sys.stdin.readline().rstrip()
t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(min(arr),max(arr))