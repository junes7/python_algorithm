#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    char *st = (char *)malloc(sizeof(char) * 1000001);
    char ch[5] = {'a', 'e', 'i', 'o', 's'};
    char num[5] = {'4', '3', '1', '0', '5'};
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (st[i] == ch[j]) {
                st[i] = num[j];
                break;
            }
        }
    }
    printf("%s", st);
    return 0;
}