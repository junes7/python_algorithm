#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, cmd, idx = 0;
    scanf("%d", &n);
    int *stack = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &cmd);
        if (cmd == 1) {
            scanf("%d", &stack[idx++]);
        } else if (cmd == 2) {
            if (idx == 0)
                printf("%d\n", -1);
            else {
                printf("%d\n", stack[idx - 1]);
                idx--;
            }
        } else if (cmd == 3) {
            printf("%d\n", idx);
        } else if (cmd == 4) {
            printf("%d\n", idx == 0 ? 1 : 0);
        } else {
            printf("%d\n", idx == 0 ? -1 : stack[idx - 1]);
        }
    }
    return 0;
}