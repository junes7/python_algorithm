#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 10), *temp;
    int idx = 0, *num = (int *)malloc(sizeof(int) * 3);
    gets(st);
    temp = strtok(st, " ");
    while (temp != NULL) {
        if (isdigit(temp[0]))
            num[idx++] = atoi(temp);
        temp = strtok(NULL, " ");
    }
    printf((num[0] + num[1]) == num[2] ? "YES" : "NO");
    return 0;
}