#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int carry = 0, lena, lenb;
    char *a = (char *)malloc(sizeof(char) * 10001);
    char *b = (char *)malloc(sizeof(char) * 10001);
    char *t = (char *)malloc(sizeof(char) * 10003);
    char *rlt = (char *)malloc(sizeof(char) * 10003);
    scanf("%s %s", a, b);
    lena = strlen(a), lenb = strlen(b);
    if (lena < lenb) {
        strcpy(rlt, a);
        strcpy(a, b);
        strcpy(b, rlt);
    }
    lena = strlen(a), lenb = strlen(b);
    for (int i = 0; i < lena - lenb; i++) {
        strcpy(rlt, "0");
        strcat(rlt, b);
        strcpy(b, rlt);
    }
    lena = strlen(a), lenb = strlen(b);
    memset(rlt, 0, sizeof(char) * 10003);
    for (int i = lena - 1; i >= 0; i--) {
        sprintf(t, "%d", (carry + a[i] - 48 + b[i] - 48) % 10);
        strcat(t, rlt);
        strcpy(rlt, t);
        carry = (carry + a[i] - 48 + b[i] - 48) / 10;
    }
    if (carry > 0) {
        sprintf(t, "%d", carry);
        strcat(t, rlt);
        strcpy(rlt, t);
    }
    printf("%s\n", rlt);
    return 0;
}