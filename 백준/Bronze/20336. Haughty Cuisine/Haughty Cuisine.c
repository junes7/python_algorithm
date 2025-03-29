#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, idx = 0;
    char *temp, *st = (char *)malloc(sizeof(char) * 885);
    scanf("%d", &n);
    gets(st);
    for (int i = 0; i < n; i++) {
        gets(st);
        if (i == 0) {
            temp = strtok(st, " ");
            while (temp != NULL) {
                printf("%s\n", temp);
                temp = strtok(NULL, " ");
            }
        }
    }
    return 0;
}