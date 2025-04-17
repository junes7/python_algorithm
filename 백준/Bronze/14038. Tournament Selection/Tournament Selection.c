#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int cnt = 0;
    char *arr = (char *)malloc(sizeof(char) * 12);
    for (int i = 0; i < 12; i++) {
        scanf("%c", &arr[i]);
        if (arr[i] == 'W')
            cnt += 1;
    }
    arr[11] = '\0';
    if (cnt >= 5)
        printf("%d", 1);
    else if (cnt >= 3)
        printf("%d", 2);
    else if (cnt >= 1)
        printf("%d", 3);
    else
        printf("%d", -1);
    return 0;
}