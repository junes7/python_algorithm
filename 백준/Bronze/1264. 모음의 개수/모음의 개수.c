#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, cnt;
    char* st = (char*)malloc(sizeof(char) * 256);
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    while (gets(st) != EOF) {
        if (strcmp(st, "#") == 0) break;
        cnt = 0, len = strlen(st);
        for (int i = 0; i < len; i++) {
            if (65 <= st[i] && st[i] <= 90) st[i] += 32;
            for (int j = 0; j < 5; j++) {
                if (st[i] == vowel[j]) {
                    cnt += 1;
                    break;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}