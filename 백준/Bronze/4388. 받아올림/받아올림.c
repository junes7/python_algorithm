#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* a = (char*)malloc(sizeof(char) * 11);
    char* b = (char*)malloc(sizeof(char) * 11);
    char* t = (char*)malloc(sizeof(char) * 11);
    int carry, cnt, lena, lenb;
    while (1) {
        scanf("%s %s", a, b);
        carry = 0, cnt = 0;
        if (strcmp(a, "0") == 0 && strcmp(b, "0") == 0) break;
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
            carry = (carry + (a[i] - 48) + (b[i] - 48)) / 10;
            if (carry > 0) cnt += 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}