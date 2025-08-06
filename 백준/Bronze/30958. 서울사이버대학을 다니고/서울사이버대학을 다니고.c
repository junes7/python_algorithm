#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, maxn = 0, *alpha;
    alpha = (int *)malloc(sizeof(int) * 26);
    memset(alpha, 0, sizeof(int) * 26);
    scanf("%d", &n);
    char *st = (char *)malloc(sizeof(char) * (n + 1));
    gets(st);
    gets(st);
    for (int i = 0; i < n; i++) {
        if (isalpha(st[i])) {
            alpha[st[i] - 97] += 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (maxn < alpha[i])
            maxn = alpha[i];
    }
    printf("%d", maxn);
    return 0;
}