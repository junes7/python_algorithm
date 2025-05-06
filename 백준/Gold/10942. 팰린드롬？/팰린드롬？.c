#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void solution(int n, int m, int* arr, int** que) {
    int s, e;
    bool** dp = (bool**)malloc(sizeof(bool*) * (n + 1));
    for (int i = 0; i < n + 1; i++) {
        dp[i] = (bool*)malloc(sizeof(bool) * (n + 1));
        memset(dp[i], 0, sizeof(bool) * (n + 1));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n + 1 - i; j++) {
            s = j, e = j + i;
            if (s == e || (arr[s] == arr[e] && (s + 1 == e || dp[s + 1][e - 1])))
                dp[s][e] = true;
        }
    }
    for (int i = 0; i < m; i++) {
        s = que[i][0], e = que[i][1];
        printf("%d\n", dp[s][e] ? 1 : 0);
    }
}
int main(void) {
    int n, m, *arr, **que;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * (n + 1));
    arr[0] = 0;
    for (int i = 1; i < n + 1; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &m);
    que = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++)
        que[i] = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < m; i++)
        scanf("%d %d", &que[i][0], &que[i][1]);
    solution(n, m, arr, que);
    return 0;
}