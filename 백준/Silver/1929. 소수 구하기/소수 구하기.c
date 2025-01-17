#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int st, end, j;
    scanf("%d %d", &st, &end);
    bool *arr = (bool *)malloc(sizeof(bool) * 1000000);
    for (int i = 0; i < end + 1; i++) {
        arr[i] = true;
    }
    for (int i = 2; i < (int)sqrt(end) + 1; i++) {
        if (arr[i] == true) {
            j = 2;
            while (i * j <= end) {
                arr[i * j] = false;
                j += 1;
            }
        }
    }
    if(st==1) st+=1;
    for (int i = st; i < end + 1; i++) {
        if (arr[i] == true)
            printf("%d\n", i);
    }
    free(arr);
    return 0;
}