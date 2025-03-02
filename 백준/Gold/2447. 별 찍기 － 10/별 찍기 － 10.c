#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **draw_stars(int n) {
    char **rlt = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        rlt[i] = (char *)malloc(sizeof(char) * 7000);
        memset(rlt[i], 0, sizeof(char) * 7000);
    }
    char **stars = (char **)malloc(sizeof(char *) * n);
    char *temp = (char *)malloc(sizeof(char) * 7000);
    if (n == 1) {
        stars[0] = (char *)malloc(sizeof(char) * (n + 1));
        stars[0][0] = '*';
        stars[0][1] = '\0';
        return stars;
    }
    stars = draw_stars(n / 3);
    for (int i = 0; i < n / 3; i++) {
        memset(temp, 0, sizeof(char) * 7000);
        for (int j = 0; j < 3; j++)
            strcat(temp, stars[i]);
        strcpy(rlt[i], temp);
    }
    for (int i = 0; i < n / 3; i++) {
        memset(temp, 0, sizeof(char) * 7000);
        strcat(temp, stars[i]);
        for (int j = 0; j < n / 3; j++)
            strcat(temp, " ");
        strcat(temp, stars[i]);
        strcpy(rlt[i + 1 * (n / 3)], temp);
    }
    for (int i = 0; i < n / 3; i++) {
        memset(temp, 0, sizeof(char) * 7000);
        for (int j = 0; j < 3; j++)
            strcat(temp, stars[i]);
        strcpy(rlt[i + 2 * (n / 3)], temp);
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