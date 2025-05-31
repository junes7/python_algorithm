#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int idx = 0, tot1, tot2, rlt, *t1, *t2;
    char *temp1, *st1 = (char *)malloc(sizeof(char) * 9);
    char *temp2, *st2 = (char *)malloc(sizeof(char) * 9);
    t1 = (int *)malloc(sizeof(int) * 3);
    t2 = (int *)malloc(sizeof(int) * 3);
    scanf("%s", st1);
    temp1 = strtok(st1, ":");
    while (temp1 != NULL) {
        t1[idx++] = atoi(temp1);
        temp1 = strtok(NULL, ":");
    }
    scanf("%s", st2);
    idx = 0;
    temp2 = strtok(st2, ":");
    while (temp2 != NULL) {
        t2[idx++] = atoi(temp2);
        temp2 = strtok(NULL, ":");
    }
    tot1 = t1[0] * 3600 + t1[1] * 60 + t1[2];
    tot2 = t2[0] * 3600 + t2[1] * 60 + t2[2];
    if (tot1 >= tot2) tot2 += 24 * 60 * 60;
    rlt = tot2 - tot1;
    printf("%02d:%02d:%02d", rlt / 3600, (rlt % 3600) / 60, rlt % 60);
    return 0;
}