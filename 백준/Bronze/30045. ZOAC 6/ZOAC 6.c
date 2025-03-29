#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 501);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        if (strstr(st, "OI") != NULL || strstr(st, "01") != NULL) {
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}