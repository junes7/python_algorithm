#include <math.h>
#include <stdio.h>
int main(void) {
    int n, idx = -1;
    scanf("%d", &n);
    for (int i = 0; i < 31; i++) {
        if (pow(2, i) == n) {
            idx = i;
            break;
        }
    }
    printf("%d", idx == -1 ? 0 : 1);
    return 0;
}