import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    n = int(input())
    if n == -1:
        break
    li = [list(map(int, input().split())) for _ in range(n)]
    res = li[0][0]*li[0][1]
    for i in range(1, n):
        res += li[i][0]*(li[i][1]-li[i-1][1])
    print(res, "miles")