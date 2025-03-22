#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, cnta, cntb;
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        cnta = 0, cntb = 0;
        for (int j = 0; j < len; j++) {
            if (st[j] == 'a')
                cnta += 1;
            else if (st[j] == 'b')
                cntb += 1;
        }
        printf("%d\n", cnta < cntb ? cnta : cntb);
    }
    return 0;
}