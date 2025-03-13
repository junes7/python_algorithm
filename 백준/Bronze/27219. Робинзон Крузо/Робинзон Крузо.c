#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n / 5; i++)
        printf("V");
    for (int i = 0; i < n % 5; i++)
        printf("I");
    return 0;
}