#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int main(void) {
    int res, n;
    char op[2];
    scanf("%d", &res);
    while (true) {
        scanf("%s", op);
        if (strcmp(op, "=") == 0) break;
        scanf("%d", &n);
        if (strcmp(op, "+") == 0)
            res += n;
        else if (strcmp(op, "-") == 0)
            res -= n;
        else if (strcmp(op, "*") == 0)
            res *= n;
        else
            res /= n;
    }
    printf("%d", res);
    return 0;
}