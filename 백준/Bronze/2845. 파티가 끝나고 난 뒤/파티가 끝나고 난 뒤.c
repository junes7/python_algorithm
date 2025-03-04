#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int l, p, *nums = (int*)malloc(sizeof(int) * 5);
    scanf("%d %d", &l, &p);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
        printf("%d ", nums[i] - l * p);
    }
    return 0;
}