#include <stdio.h>
int main(void) {
    int n, idx;
    scanf("%d", &n);
    char twelve[13] = "ABCDEFGHIJKL", ten[11] = "0123456789";
    idx = n + 2400 - 2013;
    printf("%c%c", twelve[(idx + 5) % 12], ten[(idx - 1) % 10]);
    return 0;
}