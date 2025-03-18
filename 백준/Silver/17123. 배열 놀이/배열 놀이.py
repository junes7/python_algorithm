import sys
input=lambda:sys.stdin.readline().rstrip()
for test in range(int(input())):
    N,M = map(int,input().split())
    matrix = [list(map(int,input().split())) for _ in range(N)]
    ans = [[] for _ in range(2)]
    for i in range(N):
        ans[0].append(sum(matrix[i]))
    for i in range(N):
        ans[1].append(sum(matrix[m][i] for m in range(N)))
    for _ in range(M):
        r1,c1,r2,c2,v = map(int,input().split())
        for i in range(r1-1,r2):
            ans[0][i] += (c2-c1+1)*v
        for i in range(c1-1,c2):
            ans[1][i] += (r2-r1+1)*v
    for i in range(2):
        print(*ans[i])