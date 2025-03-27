#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, cnt, s = 0;
    char* st = (char*)malloc(sizeof(char) * 100);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        cnt = 0;
        for (int j = 0; j < m; j++) {
            if (st[j] == 'O')
                cnt += 1;
        }
        if (cnt >= m / 2 + 1) s += 1;
    }
    printf("%d", s);
    return 0;
}