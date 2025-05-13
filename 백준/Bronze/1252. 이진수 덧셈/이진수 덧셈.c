#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int lena, lenb, carry = 0, total, idx;
    char *a = (char *)malloc(sizeof(char) * 81);
    char *b = (char *)malloc(sizeof(char) * 81);
    char *temp = (char *)malloc(sizeof(char) * 82);
    char *res = (char *)malloc(sizeof(char) * 82);
    memset(res, 0, sizeof(char) * 82);
    scanf("%s %s", a, b);
    lena = strlen(a), lenb = strlen(b);
    if (lena < lenb) {
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
    }
    lena = strlen(a), lenb = strlen(b);
    for (int i = 0; i < lena - lenb; i++) {
        strcpy(temp, "0");
        strcat(temp, b);
        strcpy(b, temp);
    }
    lenb = strlen(b);
    for (int i = lena - 1; i >= 0; i--) {
        total = (a[i] - 48) + (b[i] - 48);
        if (carry + total == 3 || carry + total == 1) {
            strcpy(temp, "1");
            strcat(temp, res);
            strcpy(res, temp);
            carry = carry + total == 3 ? 1 : 0;
        } else if (carry + total == 2 || carry + total == 0) {
            strcpy(temp, "0");
            strcat(temp, res);
            strcpy(res, temp);
            carry = carry + total == 2 ? 1 : 0;
        }
    }
    if (carry == 1) {
        strcpy(temp, "1");
        strcat(temp, res);
        strcpy(res, temp);
    }
    strcpy(res, strstr(res, "1") == NULL ? "0" : strstr(res, "1"));
    printf("%s\n", res);
    return 0;
}