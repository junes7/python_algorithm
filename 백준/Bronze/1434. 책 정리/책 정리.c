#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, total = 0, *box, *book;
    scanf("%d %d", &n, &m);
    box = (int*)malloc(sizeof(int) * n);
    book = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < n; i++)
        scanf("%d", &box[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &book[i]);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (book[i] > box[j]) continue;
            box[j] -= book[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
        total += box[i];
    printf("%d", total);
    return 0;
}