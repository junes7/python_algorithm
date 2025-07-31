#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 101);
    char *rlt = (char *)malloc(sizeof(char) * 101);
    int len, i = 0, idx = 0;
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    gets(st);
    len = strlen(st);
    while (i < len) {
        for (int j = 0; j < 5; j++) {
            if (st[i] == vowel[j]) {
                i += 2;
                break;
            }
        }
        rlt[idx++] = st[i++];
    }
    rlt[idx] = '\0';
    printf("%s", rlt);
    return 0;
}