#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n;
    bool flag;
    scanf("%d", &n);
    char **ingred = (char **)malloc(sizeof(char *) * n);
    char **used = (char **)malloc(sizeof(char *) * (n - 1));
    for (int i = 0; i < n; i++) {
        ingred[i] = (char *)malloc(sizeof(char) * 21);
        scanf("%s", ingred[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        used[i] = (char *)malloc(sizeof(char) * 21);
        scanf("%s", used[i]);
    }
    for (int i = 0; i < n; i++) {
        flag = true;
        for (int j = 0; j < n - 1; j++) {
            if (strcmp(ingred[i], used[j]) == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            printf("%s", ingred[i]);
            break;
        }
    }
    return 0;
}