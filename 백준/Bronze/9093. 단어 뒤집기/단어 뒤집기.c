#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, len;
    scanf("%d", &t);
    char *temp, *st = (char *)malloc(sizeof(char) * 1001);
    gets(st);
    for (int i = 0; i < t; i++) {
        gets(st);
        temp = strtok(st, " ");
        while (temp != NULL) {
            len = strlen(temp);
            for (int j = len - 1; j >= 0; j--)
                printf("%c", temp[j]);
            printf(" ");
            temp = strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}