#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, idx = 0;
    bool flag;
    char *st, *t, tar[10] = "CAMBRIDGE";
    st = (char *)malloc(sizeof(char) * 101);
    t = (char *)malloc(sizeof(char) * 101);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        flag = true;
        for (int j = 0; j < 9; j++) {
            if (st[i] == tar[j]) {
                flag = false;
                break;
            }
        }
        if (flag)
            t[idx++] = st[i];
    }
    t[idx] = '\0';
    printf("%s", t);
    return 0;
}