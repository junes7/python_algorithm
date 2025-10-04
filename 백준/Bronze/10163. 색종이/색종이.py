N = int(input())
arr = [[0]*1001 for _ in range(1001)]
for n in range(1, N+1):
    sj, si, w, h = map(int, input().split())
    for i in range(si, si+h):
        arr[i][sj:sj+w] = [n]*w
cnts = [0]*(N+1)
for lst in arr:
    for n in lst:
        cnts[n] += 1
print(*cnts[1:], sep='\n')