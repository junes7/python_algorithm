#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *n = (char *)malloc(sizeof(char) * 1001);
    int tmp;
    while (1) {
        scanf("%s", n);
        if (strcmp(n, "0") == 0) break;
        while (1) {
            tmp = 0;
            for (int i = 0; i < strlen(n); i++)
                tmp += n[i] - 48;
            if (tmp < 10) {
                printf("%d\n", tmp);
                break;
            }
            sprintf(n, "%d", tmp);
        }
    }
    return 0;
}