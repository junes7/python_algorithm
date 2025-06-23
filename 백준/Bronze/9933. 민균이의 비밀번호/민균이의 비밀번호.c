#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, t, len, lens;
    char *st = (char *)malloc(sizeof(int) * 15);
    char **words = (char **)malloc(sizeof(char *) * n);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        words[i] = (char *)malloc(sizeof(char) * 15);
        scanf("%s", words[i]);
    }
    for (int i = 0; i < n; i++) {
        strcpy(st, words[i]);
        lens = strlen(st);
        for (int j = 0; j < lens / 2; j++) {
            t = st[j];
            st[j] = st[lens - 1 - j];
            st[lens - 1 - j] = t;
        }
        for (int j = i; j < n; j++) {
            if (strcmp(st, words[j]) == 0) {
                len = strlen(words[j]);
                printf("%d %c", len, words[j][len / 2]);
                break;
            }
        }
    }
    return 0;
}