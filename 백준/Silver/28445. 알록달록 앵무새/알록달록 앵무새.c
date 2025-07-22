#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int idx = 0;
    char **tmp = (char **)malloc(sizeof(char *) * 2);
    char **arr = (char **)malloc(sizeof(char *) * 4);
    bool flag;
    for (int i = 0; i < 2; i++)
        tmp[i] = (char *)malloc(sizeof(char) * 21);
    for (int i = 0; i < 4; i++)
        arr[i] = (char *)malloc(sizeof(char) * 21);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%s", tmp[j]);
            flag = true;
            for (int k = 0; k < idx; k++) {
                if (strcmp(arr[k], tmp[j]) == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                strcpy(arr[idx++], tmp[j]);
        }
    }
    qsort(arr, idx, sizeof(char *), cmp);
    for (int i = 0; i < idx; i++) {
        for (int j = 0; j < idx; j++) {
            printf("%s %s\n", arr[i], arr[j]);
        }
    }
    return 0;
}