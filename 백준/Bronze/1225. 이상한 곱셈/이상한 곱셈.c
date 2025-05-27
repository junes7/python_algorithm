#include <stdio.h>
#include <string.h>
int main(void) {
    int lena, lenb;
    unsigned long long t = 0;
    char a[10001], b[10001];
    scanf("%s %s", a, b);
    lena = strlen(a), lenb = strlen(b);
    for (int i = 0; i < lena; i++) {
        for (int j = 0; j < lenb; j++) {
            t += (a[i] - 48) * (b[j] - 48);
        }
    }
    printf("%llu", t);
    return 0;
}