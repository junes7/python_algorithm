import sys
input = sys.stdin.readline
N, M, K = map(int, input().split())
seat = [list(input().rstrip()) for _ in range(N)]
result = 0
for i in range(N):
	check = 1
	for j in range(M):
		if seat[i][j] == "0":
			if check >= K:
				result += 1
			check += 1
		else:
			check = 1
print(result)