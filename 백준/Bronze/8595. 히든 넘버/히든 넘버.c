#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    scanf("%d", &n);
    long cur_number = 0, total_sum = 0;
    char *s = (char *)malloc(sizeof(char) * n);
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (isdigit(s[i]))
            cur_number = cur_number * 10 + s[i] - 48;
        else {
            total_sum += cur_number;
            cur_number = 0;
        }
    }
    total_sum += cur_number;
    printf("%ld", total_sum);
    return 0;
}