#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x, y, r, *arr = (int*)malloc(sizeof(int) * 4), idx = 0;
    bool flag;
    for (int i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d %d", &x, &y, &r);
    for (int i = 0; i < 4; i++) {
        if (arr[i] == x) {
            idx = i + 1;
            break;
        }
    }
    printf("%d", idx);
    return 0;
}