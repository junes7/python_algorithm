#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, idx, len, maxn, cnt = 0, *alpha;
    char ch[26], *st = (char *)malloc(sizeof(char) * 256);
    alpha = (int *)malloc(sizeof(int) * 26);
    scanf("%d", &n);
    gets(st);
    for (int i = 0; i < n; i++) {
        gets(st);
        memset(alpha, 0, sizeof(int) * 26);
        maxn = 0, idx = 0, len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (isalpha(st[j])) {
                alpha[st[j] - 97] += 1;
                if (maxn < alpha[st[j] - 97])
                    maxn = alpha[st[j] - 97];
            }
        }
        for (int j = 0; j < 26; j++) {
            if (alpha[j] == maxn) {
                ch[idx++] = j + 97;
            }
        }
        printf("%c\n", idx > 1 ? '?' : ch[0]);
    }
    return 0;
}