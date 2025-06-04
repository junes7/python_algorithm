#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, len, cnt;
    char *x = (char *)malloc(sizeof(char) * 101);
    char *y = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", x);
        scanf("%s", y);
        cnt = 0, len = strlen(x);
        for (int j = 0; j < len; j++) {
            if (x[j] != y[j])
                cnt += 1;
        }
        printf("Hamming distance is %d.\n", cnt);
    }
    return 0;
}