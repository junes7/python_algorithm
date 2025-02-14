#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ans = 0;
void dfs(int num, int weight, int *arr, bool *visited, int n, int k) {
    if (weight < 500)
        return;
    if (num == n) {
        ans += 1;
        return;
    }
    weight -= k;
    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;
        visited[i] = true;
        dfs(num + 1, weight + arr[i], arr, visited, n, k);
        visited[i] = false;
    }
}
int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bool *visited = (bool *)malloc(sizeof(bool) * n);
    memset(visited, false, sizeof(bool) * n);
    dfs(0, 500, arr, visited, n, k);
    printf("%d", ans);
    return 0;
}