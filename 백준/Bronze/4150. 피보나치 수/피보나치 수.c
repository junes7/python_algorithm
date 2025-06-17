#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* add(char* a, char* b) {
    char* rlt = (char*)malloc(sizeof(char) * 1001);
    char* t = (char*)malloc(sizeof(char) * 1001);
    int carry = 0, num, lena, lenb;
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
    memset(rlt, 0, sizeof(char) * 1001);
    for (int i = lena - 1; i >= 0; i--) {
        num = carry + (a[i] - 48) + (b[i] - 48);
        sprintf(t, "%d", num % 10);
        strcat(t, rlt);
        strcpy(rlt, t);
        carry = num / 10;
    }
    if (carry > 0) {
        sprintf(t, "%d", carry);
        strcat(t, rlt);
        strcpy(rlt, t);
    }
    return rlt;
}
char* fibo(int n) {
    if (n == 1 || n == 2) return "1";
    char** f = (char**)malloc(sizeof(char*) * (n + 1));
    for (int i = 0; i < n + 1; i++) {
        f[i] = (char*)malloc(sizeof(char) * 1001);
    }
    f[1] = "1", f[2] = "1";
    for (int i = 3; i < n + 1; i++) {
        f[i] = add(f[i - 1], f[i - 2]);
    }
    return f[n];
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%s", fibo(n));
    return 0;
}