#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int cnt = 0;
    char **arr = (char **)malloc(sizeof(char *) * 8);
    for (int i = 0; i < 8; i++) {
        arr[i] = (char *)malloc(sizeof(char) * 8);
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 0 && arr[i][j] == 'F')
                cnt += 1;
            else if (i % 2 != 0 && j % 2 != 0 && arr[i][j] == 'F')
                cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}