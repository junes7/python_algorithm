#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n = 0;
    char *temp, *st = (char *)malloc(sizeof(char) * 10001);
    memset(st, 0, sizeof(char) * 10001);
    char *s = (char *)malloc(sizeof(char) * 501);
    while (scanf("%s", s) != EOF)
        strcat(st, s);
    temp = strtok(st, ",");
    while (temp != NULL) {
        n += atoi(temp);
        temp = strtok(NULL, ",");
    }
    printf("%d", n);
    return 0;
}