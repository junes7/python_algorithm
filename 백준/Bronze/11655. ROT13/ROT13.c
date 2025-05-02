#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 101);
    gets(st);
    int len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (isupper(st[i]))
            st[i] += st[i] + 13 > 90 ? -13 : 13;
        else if (islower(st[i]))
            st[i] += st[i] + 13 > 122 ? -13 : 13;
    }
    printf("%s", st);
    return 0;
}