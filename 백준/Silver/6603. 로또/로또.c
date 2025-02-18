#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void generate_lottos(int *numbers, int *selected, int k, int idx, int start, int target) {
    if (idx == target) {
        for (int i = 0; i < idx; i++)
            printf("%d ", selected[i]);
        printf("\n");
        return;
    }
    for (int i = start; i < k; i++) {
        selected[idx++] = numbers[i];
        generate_lottos(numbers, selected, k, idx, i + 1, target);
        idx--;
    }
}
int main(void) {
    int k, idx = 0, *numbers, *selected;
    while (true) {
        scanf("%d", &k);
        if (k == 0) break;
        numbers = (int *)malloc(sizeof(int) * (k));
        selected = (int *)malloc(sizeof(int) * (k));
        for (int i = 0; i < k; i++)
            scanf("%d", &numbers[i]);
        generate_lottos(numbers, selected, k, idx, 0, 6);
        printf("\n");
    }
    return 0;
}