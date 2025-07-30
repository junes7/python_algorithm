#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, n, cnt2 = 0, cnte = 0;
    char *st = (char *)malloc(sizeof(char) * (pow(10, 5) + 1));
    scanf("%d", &n);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (st[i] == '2')
            cnt2++;
        else
            cnte++;
    }
    printf("%s\n", cnt2 == cnte ? "yee" : (cnt2 > cnte ? "2" : "e"));
    return 0;
}