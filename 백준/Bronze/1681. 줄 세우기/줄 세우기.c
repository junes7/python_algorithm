#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, l, num = 1, cnt = 0;
    char *st1 = (char *)malloc(sizeof(char) * 8);
    char *st2 = (char *)malloc(sizeof(char) * 8);
    scanf("%d %d", &n, &l);
    sprintf(st2, "%d", l);
    while (1) {
        sprintf(st1, "%d", num);
        if (strstr(st1, st2) == NULL) {
            cnt += 1;
            if (cnt == n) {
                printf("%d", num);
                break;
            }
        }
        num += 1;
    }
    return 0;
}