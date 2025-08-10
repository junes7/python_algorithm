#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0;
    char *st1 = (char *)malloc(sizeof(char) * 100001);
    char *st2 = (char *)malloc(sizeof(char) * 100001);
    scanf("%d %s %s", &n, st1, st2);
    for (int i = 0; i < n; i++) {
        if (st1[i] == st2[i])
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}