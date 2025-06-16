#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool isprime(int n) {
    if (n == 1)
        return false;
    for (int i = 2; i < (int)sqrt(n) + 1; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(void) {
    int n, len;
    char *st = (char *)malloc(sizeof(char) * 8);
    char *t = (char *)malloc(sizeof(char) * 8);
    scanf("%d", &n);
    while (1) {
        sprintf(st, "%d", n);
        strcpy(t, st);
        len = strlen(st);
        for (int i = 0; i < len; i++)
            t[i] = st[len - 1 - i];
        if (strcmp(t, st) == 0 && isprime(n)) {
            printf("%d", n);
            break;
        }
        n += 1;
    }
    return 0;
}