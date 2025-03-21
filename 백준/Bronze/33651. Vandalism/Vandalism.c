#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int idx = 0, len;
    char st[5] = "UAPC", t[4];
    bool flag;
    char *s = (char *)malloc(sizeof(char) * 4);
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < 4; i++) {
        flag = true;
        for (int j = 0; j < len; j++) {
            if (st[i] == s[j]) {
                flag = false;
                break;
            }
        }
        if (flag) t[idx++] = st[i];
    }
    t[idx] = '\0';
    printf("%s", t);
    return 0;
}