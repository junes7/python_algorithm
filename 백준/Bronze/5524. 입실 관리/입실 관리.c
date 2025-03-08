#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char *st = (char *)malloc(sizeof(int) * 21);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (st[j] >= 65 && st[j] <= 90)
                st[j] += 32;
        }
        printf("%s\n", st);
    }
    return 0;
}