#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, max_sum = 0, cur_sum, *cards;
    scanf("%d %d", &n, &m);
    cards = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &cards[i]);
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                cur_sum = cards[i] + cards[j] + cards[k];
                if (cur_sum <= m)
                    max_sum = max_sum < cur_sum ? cur_sum : max_sum;
            }
        }
    }
    printf("%d", max_sum);
    return 0;
}