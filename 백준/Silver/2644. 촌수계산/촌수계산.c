#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bfs(int **arr, int *arr_cnt, int *visited, int start, int end, int n) {
    visited[start] = 0;
    int idx = 0, node, *queue = (int *)malloc(sizeof(int) * n);
    queue[idx++] = start;
    while (idx > 0) {
        node = queue[0];
        for (int i = 1; i < idx; i++) {
            queue[i - 1] = queue[i];
        }
        idx--;
        if (node == end) return;
        for (int i = 0; i < arr_cnt[node]; i++) {
            if (visited[arr[node][i]] == -1) {
                visited[arr[node][i]] = visited[node] + 1;
                queue[idx++] = arr[node][i];
            }
        }
    }
}
int main(void) {
    int n, m, start, end, u, v;
    scanf("%d", &n);
    scanf("%d %d", &start, &end);
    int *visited = (int *)malloc(sizeof(int) * (n + 1));
    memset(visited, -1, sizeof(int) * (n + 1));
    int **arr = (int **)malloc(sizeof(int *) * (n + 1));
    for (int i = 0; i < n + 1; i++)
        arr[i] = (int *)malloc(sizeof(int) * n);
    int *arr_cnt = (int *)malloc(sizeof(int) * (n + 1));
    memset(arr_cnt, 0, sizeof(int) * (n + 1));
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &u, &v);
        arr[u][arr_cnt[u]++] = v;
        arr[v][arr_cnt[v]++] = u;
    }
    bfs(arr, arr_cnt, visited, start, end, n);
    printf("%d", visited[end]);
    return 0;
}