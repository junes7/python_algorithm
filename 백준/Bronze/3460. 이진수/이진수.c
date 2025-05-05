#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* TenToTwo(int dec) {
    int idx = 0;
    char* bin = (char*)malloc(sizeof(char) * 15);
    while (dec > 0) {
        bin[idx++] = dec % 2 == 1 ? '1' : '0';
        dec /= 2;
    }
    bin[idx] = '\0';
    return bin;
}
int main(void) {
    int t, n, len;
    char* rlt = (char*)malloc(sizeof(char) * 8);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        rlt = TenToTwo(n);
        len = strlen(rlt);
        for (int j = 0; j < len; j++)
            if (rlt[j] == '1')
                printf("%d ", j);
        printf("\n");
    }
    return 0;
}