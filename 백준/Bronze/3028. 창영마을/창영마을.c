#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 51);
    scanf("%s", st);
    int tmp, t, len = strlen(st), arr[3] = {1, 0, 0};
    for (int i = 0; i < len; i++) {
        t = st[i] - 65;
        tmp = arr[t];
        arr[t] = arr[t > 1 ? t % 2 : t + 1];
        arr[t > 1 ? t % 2 : t + 1] = tmp;
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 1) {
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}