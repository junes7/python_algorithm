#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        for (int j = 0; j < m; j++) {
            if (st[j] == '+') {
                cnt += 1;
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}