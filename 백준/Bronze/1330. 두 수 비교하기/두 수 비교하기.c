#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf(a > b ? ">\n" : (a < b ? "<\n" : "==\n"));
    return 0;
}