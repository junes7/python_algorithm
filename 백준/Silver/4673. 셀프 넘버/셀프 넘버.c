#include <stdio.h>
#include <stdlib.h>
int func_d(int num) {
    int r = num;
    while (num > 0) {
        r += num % 10;
        num /= 10;
    }
    return r;
}
int main(void) {
    int *num = (int *)malloc(sizeof(int) * 10001);
    for (int i = 0; i < 10001; i++)
        num[i] = 1;
    for (int i = 1; i < 10001; i++)
        if (func_d(i) < 10001)
            num[func_d(i)] = 0;
    for (int i = 1; i < 10001; i++)
        if (num[i])
            printf("%d\n", i);
    return 0;
}