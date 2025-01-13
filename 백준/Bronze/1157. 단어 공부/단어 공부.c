#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* ch = (char*)malloc(sizeof(char) * 1000000);
    scanf("%s", ch);
    int maxn = 0, cnt = 0, idx, len = strlen(ch), num[26] = {0,};
    for (int i = 0; i < len; i++) {
        if (ch[i] >= 65 && ch[i] <= 90) {
            num[ch[i] - 65] += 1;
        } else {
            num[ch[i] - 97] += 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (maxn < num[i])
            maxn = num[i];
    }
    for (int i = 0; i < 26; i++) {
        if (maxn == num[i]) {
            cnt += 1;
            idx = i;
        }
    }
    printf("%c", cnt > 1 ? '?' : (char)idx + 65);
    return 0;
}