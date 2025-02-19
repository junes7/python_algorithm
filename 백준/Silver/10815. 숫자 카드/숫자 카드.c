#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
void find_cards(int n, int *cards, int m, int *numbers) {
    int start, mid, end;
    bool flag;
    for (int i = 0; i < m; i++) {
        start = 0, end = n - 1, flag = false;
        while (start <= end) {
            mid = (start + end) / 2;
            if (cards[mid] == numbers[i]) {
                flag = true;
                break;
            } else if (cards[mid] < numbers[i])
                start = mid + 1;
            else
                end = mid - 1;
        }
        printf("%d ", flag ? 1 : 0);
    }
}
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, m, *cards, *numbers;
    scanf("%d", &n);
    cards = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &cards[i]);
    scanf("%d", &m);
    qsort(cards, n, sizeof(int), compare);
    numbers = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        scanf("%d", &numbers[i]);
    find_cards(n, cards, m, numbers);
    return 0;
}