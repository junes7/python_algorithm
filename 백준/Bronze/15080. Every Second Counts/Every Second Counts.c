#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *temp, *st = (char *)malloc(sizeof(char) * 13);
    int idx, start, end, rlt;
    int **arr = (int **)malloc(sizeof(int *) * 2);
    for (int i = 0; i < 2; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 3);
        gets(st);
        idx = 0;
        temp = strtok(st, ":");
        while (temp != NULL) {
            arr[i][idx++] = atoi(temp);
            temp = strtok(NULL, ":");
        }
    }
    start = arr[0][0] * 3600 + arr[0][1] * 60 + arr[0][2];
    end = arr[1][0] * 3600 + arr[1][1] * 60 + arr[1][2];
    rlt = end - start;
    if (rlt < 0)
        rlt += 24 * 3600;
    printf("%d", rlt);
    return 0;
}