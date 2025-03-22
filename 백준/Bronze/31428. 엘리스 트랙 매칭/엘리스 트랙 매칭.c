#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, idx = 0, cnt = 0;
    scanf("%d", &n);
    char t, *temp, *st = (char*)malloc(sizeof(char) * (n + 1));
    gets(st);
    gets(st);
    temp = strtok(st, " ");
    while (temp != NULL) {
        st[idx++] = temp[0];
        temp = strtok(NULL, " ");
    }
    scanf("%c", &t);
    for (int i = 0; i < n; i++) {
        if (st[i] == t)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}