#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, maxn = 0, *alpha;
    alpha = (int *)malloc(sizeof(int) * 26);
    memset(alpha, 0, sizeof(int) * 26);
    char *st = (char *)malloc(sizeof(char) * 1001);
    scanf("%d %s", &n, st);
    for (int i = 0; i < n; i++) {
        alpha[st[i] - 97] += 1;
        if (maxn < alpha[st[i] - 97])
            maxn = alpha[st[i] - 97];
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == maxn) {
            printf("%c %d", (char)97 + i, maxn);
            break;
        }
    }
    return 0;
}