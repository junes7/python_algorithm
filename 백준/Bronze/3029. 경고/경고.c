#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int idx, time, **t;
    char *temp, *st = (char *)malloc(sizeof(char) * 9);
    t = (int **)malloc(sizeof(int *) * 2);
    for (int i = 0; i < 2; i++) {
        idx = 0;
        scanf("%s", st);
        t[i] = (int *)malloc(sizeof(int) * 3);
        temp = strtok(st, ":");
        while (temp != NULL) {
            t[i][idx++] = atoi(temp);
            temp = strtok(NULL, ":");
        }
    }
    time = (t[1][0] - t[0][0]) * 3600 + (t[1][1] - t[0][1]) * 60 + (t[1][2] - t[0][2]);
    if (time <= 0)
        time += 60 * 60 * 24;
    printf("%02d:%02d:%02d", time / 3600, (time % 3600) / 60, (time % 3600) % 60);
    return 0;
}