#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, s;
    char *temp, *st = (char *)malloc(sizeof(char) * (10000 * 100 + 1));
    scanf("%d", &t);
    gets(st);
    for (int i = 0; i < t; i++) {
        s = 0;
        gets(st);
        temp = strtok(st, " ");
        while (temp != NULL) {
            s += atoi(temp);
            temp = strtok(NULL, " ");
        }
        printf("%d\n", s);
    }
    return 0;
}