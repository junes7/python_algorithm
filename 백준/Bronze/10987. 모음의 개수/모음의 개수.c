#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 101);
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (st[i] == vowels[j]) {
                cnt += 1;
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}