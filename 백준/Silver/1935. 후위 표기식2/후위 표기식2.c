#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, idx = 0, *num;
    double t, rlt, *stack;
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    scanf("%s", st);
    num = (int *)malloc(sizeof(int) * n);
    stack = (double *)malloc(sizeof(double) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (isalpha(st[i])) {
            stack[idx++] = num[st[i] - 65];
        } else {
            t = stack[idx - 1];
            idx--;
            rlt = stack[idx - 1];
            idx--;
            if (st[i] == '+') {
                rlt += t;
            } else if (st[i] == '-') {
                rlt -= t;
            } else if (st[i] == '*') {
                rlt *= t;
            } else {
                rlt /= t;
            }
            stack[idx++] = rlt;
        }
    }
    printf("%.2f", rlt);
    return 0;
}