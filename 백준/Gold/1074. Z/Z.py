N, R, C = map(int, input().split())
result = 0
dr = (0, 0, 1, 1)
dc = (0, 1, 0, 1)
def solve(n, r, c):
    global result
    if r == R and c == C:
        print(result)
        return
    if not(r <= R < r + n and c <= C < c + n):
        result += n * n
        return
    n //= 2
    for i in range(4):
        nr = r + n * dr[i]
        nc = c + n * dc[i]
        solve(n, nr, nc)
solve(2 ** N, 0, 0)