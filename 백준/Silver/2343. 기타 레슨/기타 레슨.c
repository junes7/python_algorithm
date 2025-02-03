#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, left = 0, right = 0, mid, cnt, total;
    scanf("%d %d", &n, &m);
    int *disc = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &disc[i]);
        if (left < disc[i])
            left = disc[i];
        right += disc[i];
    }
    while (left <= right) {
        mid = (left + right) / 2;
        cnt = 1, total = 0;
        for (int i = 0; i < n; i++) {
            if (total + disc[i] <= mid) {
                total += disc[i];
            } else {
                total = disc[i];
                cnt += 1;
            }
        }
        if (m < cnt)
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("%d", left);
    return 0;
}