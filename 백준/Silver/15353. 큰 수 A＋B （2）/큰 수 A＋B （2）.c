#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int lena, lenb, carry = 0;
    char *a = (char *)malloc(sizeof(char) * 10001);
    char *b = (char *)malloc(sizeof(char) * 10001);
    char *rlt = (char *)malloc(sizeof(char) * 10003);
    memset(rlt, 0, sizeof(char) * 10003);
    char *t = (char *)malloc(sizeof(char) * 10003);
    scanf("%s %s", a, b);
    lena = strlen(a), lenb = strlen(b);
    if (lena < lenb) {
        strcpy(t, a);
        strcpy(a, b);
        strcpy(b, t);
    }
    lena = strlen(a), lenb = strlen(b);
    for (int i = 0; i < lena - lenb; i++) {
        strcpy(t, "0");
        strcat(t, b);
        strcpy(b, t);
    }
    for (int i = lena - 1; i >= 0; i--) {
        sprintf(t, "%d", (carry + a[i] - 48 + b[i] - 48) % 10);
        strcat(t, rlt);
        strcpy(rlt, t);
        carry = (carry + a[i] - 48 + b[i] - 48) / 10;
    }
    if (carry) {
        sprintf(t, "%d", carry);
        strcat(t, rlt);
        strcpy(rlt, t);
    }
    printf("%s", rlt);
    return 0;
}