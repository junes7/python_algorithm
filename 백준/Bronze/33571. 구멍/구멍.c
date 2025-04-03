#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void) {
    int len, cnt = 0;
    int alphaU_num[26] = {1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    int alphal_num[26] = {1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char st[1001];
    gets(st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (isalpha(st[i])) {
            cnt += isupper(st[i]) ? alphaU_num[st[i] - 65] : alphal_num[st[i] - 97];
        } else if (st[i] == '@') {
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}