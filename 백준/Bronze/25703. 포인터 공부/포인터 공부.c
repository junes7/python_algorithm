#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n;
    char **arr, *tmp1, *tmp2;
    scanf("%d", &n);
    arr = (char **)malloc(sizeof(char *) * (n + 1));
    tmp1 = (char *)malloc(sizeof(char) * 4);
    tmp2 = (char *)malloc(sizeof(char) * 4);
    for (int i = 0; i < n + 1; i++) {
        arr[i] = (char *)malloc(sizeof(char) * 122);
        memset(arr[i], 0, sizeof(char) * 122);
    }
    strcpy(arr[0], "int a;");
    for (int i = 1; i < n + 1; i++) {
        strcat(arr[i], "int ");
        for (int j = 0; j < i; j++)
            strcat(arr[i], "*");
        if (i == 1)
            strcat(arr[i], "ptr = &a;");
        else {
            sprintf(tmp1, "%d", i);
            if (i > 2)
                sprintf(tmp2, "%d", i - 1);
            strcat(arr[i], "ptr");
            strcat(arr[i], tmp1);
            strcat(arr[i], " = &ptr");
            strcat(arr[i], (i > 2 ? tmp2 : ""));
            strcat(arr[i], ";");
        }
    }
    for (int i = 0; i < n + 1; i++)
        printf("%s\n", arr[i]);
    return 0;
}