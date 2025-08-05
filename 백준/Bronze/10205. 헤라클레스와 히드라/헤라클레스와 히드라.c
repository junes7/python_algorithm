#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, n, len;
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %s", &n, st);
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (st[j] == 'b')
                n -= 1;
            else
                n += 1;
        }
        printf("Data Set %d:\n%d\n\n", i + 1, n);
    }
    return 0;
}