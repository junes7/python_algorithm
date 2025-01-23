#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, num, idx = 0, s = 0, *stack = (int*)malloc(sizeof(int) * 100000);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num == 0) {
            s -= stack[idx - 1];
            idx--;
        } else {
            stack[idx++] = num;
            s += num;
        }
    }
    printf("%d", s);
    free(stack);
    return 0;
}