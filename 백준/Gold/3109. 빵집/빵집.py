import sys
input=lambda:sys.stdin.readline().rstrip()
def install_pipes(R, C, grid):
    def dfs(row, col):
        if col == C-1:
            return True
        for dx in [-1, 0, 1]:
            next_row, next_col = row + dx, col + 1
            if 0 <= next_row < R and grid[next_row][next_col] == ".":
                grid[next_row][next_col] = 'x'
                if dfs(next_row, next_col):
                    return True
        return False
    total_pipes = 0
    for i in range(R):
        if grid[i][0] == '.':
            if dfs(i, 0):
                total_pipes += 1
    return total_pipes
R, C = map(int, input().split())
grid = [list(input()) for _ in range(R)]
print(install_pipes(R, C, grid))