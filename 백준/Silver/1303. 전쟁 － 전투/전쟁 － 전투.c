#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
int dfs(char **board, bool **visited, int y, int x, char color, int m, int n) {
    int ny, nx, count = 1;
    visited[y][x] = true;
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (0 <= ny && ny < m && 0 <= nx && nx < n) {
            if (visited[ny][nx] == false && board[ny][nx] == color)
                count += dfs(board, visited, ny, nx, color, m, n);
        }
    }
    return count;
}
int main(void) {
    int n, m, cnt, white = 0, blue = 0;
    scanf("%d %d", &n, &m);
    char **board = (char **)malloc(sizeof(char *) * m);
    for (int i = 0; i < m; i++) {
        board[i] = (char *)malloc(sizeof(char) * n);
        scanf("%s", board[i]);
    }
    bool **visited = (bool **)malloc(sizeof(bool *) * m);
    for (int i = 0; i < m; i++) {
        visited[i] = (bool *)malloc(sizeof(bool) * n);
        for (int j = 0; j < n; j++) {
            visited[i][j] = false;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (visited[i][j] == false) {
                cnt = dfs(board, visited, i, j, board[i][j], m, n);
                if (board[i][j] == 'W')
                    white += cnt * cnt;
                else
                    blue += cnt * cnt;
            }
        }
    }
    printf("%d %d", white, blue);
    return 0;
}