#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, n, idx;
    char *st = (char *)malloc(sizeof(char) * 11);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            strcpy(st, "#");
            idx = 1;
            for (int k = 0; k < n - 2; k++)
                st[idx++] = (1 <= j && j <= n - 2) ? 'J' : '#';
            if (n > 1)
                st[idx++] = '#';
            st[idx] = '\0';
            printf("%s\n", st);
        }
        printf("\n");
    }
    return 0;
}