#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *temp, *st = (char *)malloc(sizeof(char) * 101);
    scanf("%s", st);
    temp = strtok(st, "-");
    while (temp != NULL) {
        printf("%c", temp[0]);
        temp = strtok(NULL, "-");
    }
    return 0;
}