#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int q, len, idx, start = 0, end = 0;
    char *s = (char*)malloc(sizeof(char) * 200001), ch;
    scanf("%s", s);
    scanf("%d", &q);
    len = strlen(s);
    int** arr = (int**)malloc(sizeof(int*) * 26);
    for (int i = 0; i < 26; i++) {
        arr[i] = (int*)malloc(sizeof(int) * len);
        for (int j = 0; j < len; j++) {
            arr[i][j] = 0;
        }
    }
    for (int j = 0; j < len; j++) {
        idx = s[j] - 97;
        for (int i = 0; i < 26; i++) {
            if (j > 0)
                arr[i][j] = arr[i][j - 1];
            if (i == idx)
                arr[i][j] += 1;
        }
    }
    for (int i = 0; i < q; i++) {
        scanf(" %c %d %d", &ch, &start, &end);
        idx = ch - 97;
        len = arr[idx][end];
        if (start)
            len -= arr[idx][start - 1];
        printf("%d\n", len);
    }
    return 0;
}