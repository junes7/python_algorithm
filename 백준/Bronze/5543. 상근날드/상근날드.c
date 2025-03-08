#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, *burgers = (int*)malloc(sizeof(int) * 3);
    int price = 4000, *drinks = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < 3; i++)
        scanf("%d", &burgers[i]);
    for (int i = 0; i < 2; i++)
        scanf("%d", &drinks[i]);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            t = burgers[i] + drinks[j] - 50;
            if (price > t)
                price = t;
        }
    }
    printf("%d", price);
}