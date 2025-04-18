#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, elem, total = 0;
    scanf("%d", &n);
    int arr[n], num[n];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i], &num[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &elem);
        total -= 10;
        for (int j = 0; j < n; j++) {
            if (elem == arr[j]) {
                total += num[j];
                break;
            }
        }
    }
    printf("%d", total);
    return 0;
}