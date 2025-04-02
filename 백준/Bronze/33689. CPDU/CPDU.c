#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 21);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        if (st[0] == 'C')
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}