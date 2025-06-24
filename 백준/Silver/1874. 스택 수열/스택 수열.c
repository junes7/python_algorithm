#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n, idx = 0, op_idx = 0, cnt = 1, *stack;
    scanf("%d", &t);
    stack = (int *)malloc(sizeof(int) * t);
    char *op = (char *)malloc(sizeof(char) * t * 2);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        while (cnt <= n) {
            stack[idx++] = cnt;
            op[op_idx++] = '+';
            cnt += 1;
        }
        if (stack[idx - 1] == n) {
            idx--;
            op[op_idx++] = '-';
        } else {
            break;
        }
    }
    if (idx) {
        printf("%s", "NO");
    } else {
        for (int i = 0; i < op_idx; i++)
            printf("%c\n", op[i]);
    }
    return 0;
}