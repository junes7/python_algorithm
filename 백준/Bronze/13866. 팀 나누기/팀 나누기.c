#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    printf("%d", abs((arr[3] + arr[0]) - (arr[1] + arr[2])));
    return 0;
}