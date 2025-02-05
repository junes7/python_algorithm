#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int dfs(char** arr, bool** visited, int y, int x, int n) {
    visited[y][x] = true;
    int ny, nx, cnt = 1;
    int dy[4] = {-1, 1, 0, 0};
    int dx[4] = {0, 0, -1, 1};
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (0 > ny || ny >= n || 0 > nx || nx >= n)
            continue;
        if (visited[ny][nx] == false && arr[ny][nx] == '1') {
            cnt += dfs(arr, visited, ny, nx, n);
        }
    }
    return cnt;
}
int compare(const void* pa, const void* pb) {
    const int a = *(int*)pa;
    const int b = *(int*)pb;
    return a - b;
}
int main(void) {
    int n, idx = 0;
    scanf("%d", &n);
    char** arr = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc(sizeof(char) * n);
        scanf("%s", arr[i]);
    }
    bool** visited = (bool**)malloc(sizeof(bool*) * n);
    for (int i = 0; i < n; i++) {
        visited[i] = (bool*)malloc(sizeof(bool) * n);
        for (int j = 0; j < n; j++)
            visited[i][j] = false;
    }
    int r[n * n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (visited[i][j] == false && arr[i][j] == '1') {
                r[idx++] = dfs(arr, visited, i, j, n);
            }
        }
    }
    qsort(r, idx, sizeof(int), compare);
    printf("%d\n", idx);
    for (int i = 0; i < idx; i++)
        printf("%d\n", r[i]);
    return 0;
}