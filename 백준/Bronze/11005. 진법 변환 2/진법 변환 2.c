#include <stdio.h>
#include <string.h>

int main(void) {
    long s;
    int n, idx = 0;
    char ch[100], t;
    scanf("%lld", &s);
    scanf("%d", &n);
    while (s > 0) {
        if (s % n >= 10)
            ch[idx++] = s % n + 55;
        else
            ch[idx++] = s % n + 48;
        s /= n;
    }
    ch[idx] = '\0';
    n = strlen(ch);
    for (int i = 0; i < n / 2; i++) {
        t = ch[i];
        ch[i] = ch[n - 1 - i];
        ch[n - 1 - i] = t;
    }
    printf("%s", ch);
    return 0;
}