#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, k;
    long cnt = 0;
    scanf("%d %d", &n, &k);
    char *t = (char *)malloc(sizeof(char) * 21);
    int *name = (int *)malloc(sizeof(int) * n);
    int *len_name = (int *)malloc(sizeof(int) * 21);
    memset(len_name, 0, sizeof(int) * 21);
    for (int i = 0; i < n; i++) {
        scanf("%s", t);
        name[i] = strlen(t);
    }
    for (int i = 0; i < n; i++) {
        if (k < i)
            len_name[name[i - k - 1]] -= 1;
        cnt += len_name[name[i]];
        len_name[name[i]] += 1;
    }
    printf("%ld", cnt);
}