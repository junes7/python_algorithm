#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int k, n, elem, *total = (int*)malloc(sizeof(int) * 2);
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &n);
        memset(total, 0, sizeof(int) * 2);
        for (int j = 0; j < n; j++) {
            scanf("%d", &elem);
            total[elem % 2] += elem;
        }
        printf("%s\n", total[0] == total[1] ? "TIE" : (total[0] > total[1] ? "EVEN" : "ODD"));
    }
    return 0;
}