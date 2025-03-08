#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    char* st = (char*)malloc(sizeof(char) * 16);
    while (fgets(st, sizeof(st), stdin)) {
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (st[j] == 'i' || st[j] == 'I')
                st[j] = st[j] == 'i' ? 'e' : 'E';
            else if (st[j] == 'e' || st[j] == 'E')
                st[j] = st[j] == 'e' ? 'i' : 'I';
        }
        printf("%s", st);
    }
    return 0;
}