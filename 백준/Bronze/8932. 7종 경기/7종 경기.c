#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, s, *arr;
    scanf("%d", &t);
    arr = (int*)malloc(sizeof(int) * 7);
    for (int i = 0; i < t; i++) {
        s = 0;
        for (int j = 0; j < 7; j++)
            scanf("%d", &arr[j]);
        s = (int)(9.23076 * pow(26.7 - arr[0], 1.835)) +
            (int)(1.84523 * pow(arr[1] - 75, 1.348)) +
            (int)(56.0211 * pow(arr[2] - 1.5, 1.05)) +
            (int)(4.99087 * pow(42.5 - arr[3], 1.81)) +
            (int)(0.188807 * pow(arr[4] - 210, 1.41)) +
            (int)(15.9803 * pow(arr[5] - 3.8, 1.04)) +
            (int)(0.11193 * pow(254 - arr[6], 1.88));
        printf("%d\n", s);
    }
    return 0;
}