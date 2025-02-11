#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int idx = 0;
void dfs(int **arr, int *arr_cnt, bool *visited, int start, int n, int *ans) {
    visited[n] = true;
    for (int i = 0; i < arr_cnt[n]; i++) {
        if (!visited[arr[n][i]]) {
            dfs(arr, arr_cnt, visited, start, arr[n][i], ans);
        } else if (start == arr[n][i]) {
            ans[idx++] = start;
            return;
        }
    }
}
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, elem;
    scanf("%d", &n);
    int **arr = (int **)malloc(sizeof(int *) * (n + 1));
    int *arr_cnt = (int *)malloc(sizeof(int) * (n + 1));
    memset(arr_cnt, 0, sizeof(int) * (n + 1));
    int *ans = (int *)malloc(sizeof(int) * n);
    bool *visited = (bool *)malloc(sizeof(bool) * (n + 1));
    for (int i = 1; i < n + 1; i++)
        arr[i] = (int *)malloc(sizeof(int) * n);
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &elem);
        arr[elem][arr_cnt[elem]++] = i;
    }
    for (int i = 1; i < n + 1; i++) {
        memset(visited, false, sizeof(bool) * (n + 1));
        dfs(arr, arr_cnt, visited, i, i, ans);
    }
    qsort(ans, idx, sizeof(int), compare);
    printf("%d\n", idx);
    for (int i = 0; i < idx; i++)
        printf("%d\n", ans[i]);
    return 0;
}