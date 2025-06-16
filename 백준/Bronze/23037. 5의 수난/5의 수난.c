#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    char *n = (char *)malloc(sizeof(char) * 7);
    int len, rlt = 0;
    scanf("%s", n);
    len = strlen(n);
    for (int i = 0; i < len; i++)
        rlt += pow(n[i] - 48, 5);
    printf("%d", rlt);
    return 0;
}