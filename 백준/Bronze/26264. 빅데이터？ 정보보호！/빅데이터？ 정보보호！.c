#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, *cnt = (int *)malloc(sizeof(char) * 2);
    memset(cnt, 0, sizeof(int) * 2);
    scanf("%d", &n);
    char *st = (char *)malloc(sizeof(char) * (8 * n + 1));
    char *tmp = (char *)malloc(sizeof(char) * 9);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len - 7; i++) {
        strncpy(tmp, st + i, 8);
        tmp[8] = '\0';
        if (strcmp(tmp, "security") == 0)
            cnt[0] += 1;
    }
    for (int i = 0; i < len - 6; i++) {
        strncpy(tmp, st + i, 7);
        tmp[7] = '\0';
        if (strcmp(tmp, "bigdata") == 0)
            cnt[1] += 1;
    }
    printf("%s\n", cnt[0] == cnt[1] ? "bigdata? security!" : (cnt[0] > cnt[1] ? "security!" : "bigdata?"));
    return 0;
}