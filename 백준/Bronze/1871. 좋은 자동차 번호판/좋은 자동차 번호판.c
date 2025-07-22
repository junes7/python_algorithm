#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, n, idx, s;
    char *temp, *st = (char *)malloc(sizeof(char) * 9);
    char **arr = (char **)malloc(sizeof(char *) * 2);
    for (int i = 0; i < 2; i++)
        arr[i] = (char *)malloc(sizeof(char) * 9);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", st);
        idx = 0, s = 0;
        temp = strtok(st, "-");
        while (temp != NULL) {
            strcpy(arr[idx++], temp);
            temp = strtok(NULL, "-");
        }
        n = atoi(arr[1]);
        for (int j = 0; j < 3; j++)
            s += (arr[0][j] - 65) * pow(26, 2 - j);
        printf("%s\n", abs(s - n) <= 100 ? "nice" : "not nice");
    }
    return 0;
}