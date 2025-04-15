#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, len_t;
    char *st = (char *)malloc(sizeof(char) * 51);
    char *temp = (char *)malloc(sizeof(char) * 51);
    gets(st);
    len = strlen(st);
    if (len < 2)
        printf("%s", "CE");
    else {
        strncpy(temp, st + 1, len - 2);
        temp[len - 2] = '\0';
        len_t = strlen(temp);
        if (st[0] == '"' && st[len - 1] == '"' && len_t > 0)
            printf("%s", temp);
        else
            printf("%s", "CE");
    }
    return 0;
}