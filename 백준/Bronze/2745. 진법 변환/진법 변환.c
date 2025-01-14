#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char ch[100];
    int n, len, m = 1;
    long long s = 0;
    scanf("%s", ch);
    scanf("%d", &n);
    len = strlen(ch);
    for (int i = len - 1; i >= 0; i--) {
        if (isalpha(ch[i]))
            s += (ch[i] - 65 + 10) * m;
        else
            s += (ch[i] - 48) * m;
        m *= n;
    }
    printf("%lld", s);
    return 0;
}