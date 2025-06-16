#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, n, max_p, p;
    char *max_name = (char *)malloc(sizeof(char) * 21);
    char *name = (char *)malloc(sizeof(char) * 21);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        max_p = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d %s", &p, name);
            if (max_p < p) {
                max_p = p;
                strcpy(max_name, name);
            }
        }
        printf("%s\n", max_name);
    }
    return 0;
}