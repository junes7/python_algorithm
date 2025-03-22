#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *t = (char *)malloc(sizeof(char) * 5);
    char *elem = (char *)malloc(sizeof(char) * 5);
    int n, cnt = 0;
    scanf("%s", t);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", elem);
        if (strcmp(elem, t) == 0)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}