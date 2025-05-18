#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, wizardt, oakt, scr1[6] = {1, 2, 3, 3, 4, 10}, scr2[7] = {1, 2, 2, 2, 3, 5, 10};
    scanf("%d", &t);
    int *arr1 = (int *)malloc(sizeof(int) * 6);
    int *arr2 = (int *)malloc(sizeof(int) * 7);
    for (int i = 1; i < t + 1; i++) {
        wizardt = 0, oakt = 0;
        for (int j = 0; j < 6; j++) {
            scanf("%d", &arr1[j]);
            wizardt += arr1[j] * scr1[j];
        }
        for (int j = 0; j < 7; j++) {
            scanf("%d", &arr2[j]);
            oakt += arr2[j] * scr2[j];
        }
        printf("Battle %d: %s\n", i, wizardt == oakt ? "No victor on this battle field" : (wizardt < oakt ? "Evil eradicates all trace of Good" : "Good triumphs over Evil"));
    }
    return 0;
}