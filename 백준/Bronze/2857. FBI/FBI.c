#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 11);
    int idx = 0, *arr = (int *)malloc(sizeof(int) * 5);
    for (int i = 1; i < 6; i++) {
        scanf("%s", st);
        if (strstr(st, "FBI") != NULL)
            arr[idx++] = i;
    }
    if (idx) {
        for (int i = 0; i < idx; i++)
            printf("%d ", arr[i]);
    } else {
        printf("%s", "HE GOT AWAY!");
    }
    return 0;
}