#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, cnt = 0;
    char* n = (char*)malloc(sizeof(char) * 10);
    char* t = (char*)malloc(sizeof(char) * 10);
    scanf("%s", n);
    len = strlen(n);
    for (int i = len - 1; i >= 0; i--) {
        if (n[i] != '0') {
            strncpy(t, n, i + 1);
            t[i + 1] = '\0';
            for (int j = 0; j < i + 1; j++)
                if (t[j] == '0') cnt += 1;
            printf("%d", cnt);
            break;
        }
    }
    return 0;
}