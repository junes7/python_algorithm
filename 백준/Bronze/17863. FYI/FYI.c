#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 8);
    char *t = (char *)malloc(sizeof(char) * 4);
    scanf("%s", st);
    strncpy(t, st, 3);
    t[3] = '\0';
    printf("%s", strcmp(t, "555") == 0 ? "YES" : "NO");
    return 0;
}