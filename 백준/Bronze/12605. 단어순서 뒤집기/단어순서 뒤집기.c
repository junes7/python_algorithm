#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, len, idx;
    char *temp, *st, *rlt, **arr;
    st = (char *)malloc(sizeof(char) * 26);
    rlt = (char *)malloc(sizeof(char) * 26);
    scanf("%d", &t);
    gets(st);
    for (int i = 1; i < t + 1; i++) {
        gets(st);
        arr = (char **)malloc(sizeof(char *) * 10);
        idx = 0;
        temp = strtok(st, " ");
        memset(rlt, 0, sizeof(char) * 26);
        while (temp != NULL) {
            len = strlen(temp);
            arr[idx] = (char *)malloc(sizeof(char) * (len + 1));
            strcpy(arr[idx++], temp);
            temp = strtok(NULL, " ");
        }
        for (int j = idx - 1; j >= 0; j--) {
            strcat(rlt, arr[j]);
            strcat(rlt, " ");
        }
        printf("Case #%d: %s\n", i, rlt);
    }
    return 0;
}