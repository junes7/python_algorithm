import sys
input=lambda:sys.stdin.readline().rstrip()
n, m = map(int, input().split())	# 그래프 크기 입력
# 그래프 입력 받기
graph = []
for i in range(n):
    graph.append(list(input()))
visited = [[0] * m for _ in range(n)]
# 세로 나무 판자에 대한 DFS 재귀 함수
def dfs1(r, c):
    if r >= n or c >= m:
        return False
    if visited[r][c] == 0 and graph[r][c] == '|':
        visited[r][c] = 1
        dfs1(r + 1, c)
        return True
    return False
# 가로 나무 판자에 대한 DFS 재귀 함수
def dfs2(r, c):
    if r >= n or c >= m:
        return False
    if visited[r][c] == 0 and graph[r][c] == '-':
        visited[r][c] = 1
        dfs2(r, c + 1)              
        return True
    return False
rlt = 0
# 전체 위치에 대해 DFS 함수 반복
for i in range(n):
    for j in range(m):
		# DFS 함수가 True를 반환하면 rlt += 1
        if dfs1(i, j) == True or dfs2(i, j) == True:
            rlt += 1
            # 해당 round의 탐색 결과를 비교하기 위해 visited를 출력
            # for k in range(n):
            #     print(visited[k])
            # print('------')
print(rlt)