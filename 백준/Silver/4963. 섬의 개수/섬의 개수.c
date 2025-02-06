#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void dfs(int** arr, bool** visited, int y, int x, int H, int W) {
    visited[y][x] = true;
    int ny, nx;
    int dy[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
    int dx[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
    for (int i = 0; i < 8; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (0 <= ny && ny < H && 0 <= nx && nx < W) {
            if (visited[ny][nx] == false && arr[ny][nx] == 1) {
                dfs(arr, visited, ny, nx, H, W);
            }
        }
    }
}
int main(void) {
    int W, H, cnt;
    while (true) {
        scanf("%d %d", &W, &H);
        if (!(W && H))
            break;
        int** arr = (int**)malloc(sizeof(int*) * H);
        for (int i = 0; i < H; i++) {
            arr[i] = (int*)malloc(sizeof(int) * W);
            for (int j = 0; j < W; j++)
                scanf("%d", &arr[i][j]);
        }
        bool** visited = (bool**)malloc(sizeof(bool*) * H);
        for (int i = 0; i < H; i++) {
            visited[i] = (bool*)malloc(sizeof(bool) * W);
            for (int j = 0; j < W; j++)
                visited[i][j] = false;
        }
        cnt = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (visited[i][j] == false && arr[i][j] == 1) {
                    dfs(arr, visited, i, j, H, W);
                    cnt += 1;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}