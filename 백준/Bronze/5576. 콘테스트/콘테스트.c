#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *data) {
    int temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < (10 - 1) - i; j++) {
            if (data[j] < data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
int main(void) {
    int total_w = 0, total_k = 0, *w, *k, temp;
    w = (int *)malloc(sizeof(int) * 10);
    k = (int *)malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++)
        scanf("%d", &w[i]);
    for (int i = 0; i < 10; i++)
        scanf("%d", &k[i]);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < (10 - 1) - i; j++) {
            if (w[j] < w[j + 1]) {
                temp = w[j];
                w[j] = w[j + 1];
                w[j + 1] = temp;
            }
        }
    }
    bubble_sort(w);
    bubble_sort(k);
    for (int i = 0; i < 3; i++) {
        total_w += w[i];
        total_k += k[i];
    }
    printf("%d %d\n", total_w, total_k);
    return 0;
}