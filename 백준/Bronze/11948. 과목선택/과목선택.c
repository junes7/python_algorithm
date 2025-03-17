#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int sums, total = 0, temp;
    int *sci = (int *)malloc(sizeof(int) * 4);
    int *hist = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < 4; i++)
        scanf("%d", &sci[i]);
    for (int i = 0; i < 2; i++)
        scanf("%d", &hist[i]);
    for (int i = 0; i < 4 - 2; i++) {
        for (int j = i + 1; j < 4 - 1; j++) {
            for (int k = j + 1; k < 4; k++) {
                sums = sci[i] + sci[j] + sci[k];
                temp = hist[0] > hist[1] ? sums + hist[0] : sums + hist[1];
                if (total < temp)
                    total = temp;
            }
        }
    }
    printf("%d", total);
    return 0;
}