#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int suma = 0, sumb = 0, *a, *b;
    a = (int*)malloc(sizeof(int) * 2);
    b = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 2; i++)
        scanf("%d", &b[i]);
    suma = a[1] / b[0] + (a[1] % b[0] == 0 ? 0 : 1);
    sumb = b[1] / a[0] + (b[1] % a[0] == 0 ? 0 : 1);
    printf("%s", suma == sumb ? "DRAW" : (suma > sumb ? "PLAYER A" : "PLAYER B"));
    return 0;
}