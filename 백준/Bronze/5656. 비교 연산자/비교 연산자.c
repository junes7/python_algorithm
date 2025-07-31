#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *op = (char *)malloc(sizeof(char) * 3);
    int n1, n2, flag, i = 1;
    while (1) {
        scanf("%d %s %d", &n1, op, &n2);
        if (strcmp(op, "E") == 0) break;
        if (strcmp(op, ">") == 0)
            flag = n1 > n2;
        else if (strcmp(op, ">=") == 0)
            flag = n1 >= n2;
        else if (strcmp(op, "<") == 0)
            flag = n1 < n2;
        else if (strcmp(op, "<=") == 0)
            flag = n1 <= n2;
        else if (strcmp(op, "==") == 0)
            flag = n1 == n2;
        else
            flag = n1 != n2;
        printf("Case %d: %s\n", i++, flag ? "true" : "false");
    }
    return 0;
}