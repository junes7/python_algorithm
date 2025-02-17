#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void backtrack(int *numbers, bool *used, int *current, int idx, int n) {
    if (idx == n) {
        for (int i = 0; i < idx; i++)
            printf("%d ", current[i]);
        printf("\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            current[idx++] = numbers[i];
            backtrack(numbers, used, current, idx, n);
            idx--;
            used[i] = false;
        }
    }
}
void generate_permutations(int n) {
    int *numbers = (int *)malloc(sizeof(int) * n);
    bool *used = (bool *)malloc(sizeof(bool) * n);
    for (int i = 1; i < n + 1; i++)
        numbers[i - 1] = i;
    for (int i = 0; i < n; i++)
        used[i] = false;
    int *current = (int *)malloc(sizeof(int) * n);
    backtrack(numbers, used, current, 0, n);
}
int main(void) {
    int n;
    scanf("%d", &n);
    generate_permutations(n);
    return 0;
}