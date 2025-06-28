import sys
input=lambda:sys.stdin.readline().rstrip()
n, new_sc, p = map(int, input().split())
if n == 0:
    print(1)
else:
    rank = [*map(int, input().split())]
    if n == p and rank[-1] >= new_sc:
        print(-1)
    else:
        result = n+1
        for i in range(n):
            if rank[i] <= new_sc:
                result = i+1
                break
        print(result)