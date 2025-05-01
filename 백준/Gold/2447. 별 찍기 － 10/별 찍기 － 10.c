#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **draw_stars(int n) {
    int idx;
    char **rlt = (char **)malloc(sizeof(char *) * n);
    char **stars = (char **)malloc(sizeof(char *) * n);
    char *t = (char *)malloc(sizeof(char) * (n + 1));
    for (int i = 0; i < n; i++)
        rlt[i] = (char *)malloc(sizeof(char) * (n + 1));
    if (n == 1) {
        rlt[0] = (char *)malloc(sizeof(char) * (n + 1));
        rlt[0][0] = '*';
        rlt[0][1] = '\0';
        return rlt;
    }
    stars = draw_stars(n / 3);
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < n / 3; i++) {
            memset(t, 0, sizeof(char) * (n + 1));
            if (k % 2 == 0) {
                for (int j = 0; j < 3; j++)
                    strcat(t, stars[i]);
            } else {
                strcat(t, stars[i]);
                for (int j = 0; j < n / 3; j++)
                    strcat(t, " ");
                strcat(t, stars[i]);
            }
            strcpy(rlt[i + k * (n / 3)], t);
        }
    }
    return rlt;
}
int main(void) {
    int n;
    scanf("%d", &n);
    char **result = draw_stars(n);
    for (int i = 0; i < n; i++)
        printf("%s\n", result[i]);
    return 0;
}