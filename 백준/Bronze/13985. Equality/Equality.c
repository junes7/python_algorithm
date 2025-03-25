#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *temp, *st = (char *)malloc(sizeof(char) * 10);
    int idx = 0, s = 0, *arr = (int *)malloc(sizeof(int) * 3);
    gets(st);
    temp = strtok(st, " ");
    while (temp != NULL) {
        if (isdigit(temp[0]))
            arr[idx++] = atoi(temp);
        temp = strtok(NULL, " ");
    }
    printf("%s", arr[0] + arr[1] == arr[2] ? "YES" : "NO");
    return 0;
}