#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, carry, lena, lenb;
    char *a = (char *)malloc(sizeof(char) * 81);
    char *b = (char *)malloc(sizeof(char) * 81);
    char *t = (char *)malloc(sizeof(char) * 83);
    char *rlt = (char *)malloc(sizeof(char) * 83);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s", a, b);
        carry = 0;
        memset(rlt, 0, sizeof(char) * 83);
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
            sprintf(t, "%d", (carry + a[i] - 48 + b[i] - 48) % 2);
            strcat(t, rlt);
            strcpy(rlt, t);
            carry = (carry + a[i] - 48 + b[i] - 48) / 2;
        }
        if (carry == 1) {
            sprintf(t, "%d", 1);
            strcat(t, rlt);
            strcpy(rlt, t);
        }
        strcpy(rlt, strstr(rlt, "1") == NULL ? "0" : strstr(rlt, "1"));
        printf("%s\n", rlt);
    }
    return 0;
}