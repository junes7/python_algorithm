#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int cnt = 0;
    char *temp, *st = (char*)malloc(sizeof(char) * 101);
    scanf("%s", st);
    temp = strtok(st, ",");
    while (temp != NULL) {
        cnt += 1;
        temp = strtok(NULL, ",");
    }
    printf("%d", cnt);
    return 0;
}