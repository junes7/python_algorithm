#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    if ((arr[0] == 8 || arr[0] == 9) && (arr[3] == 8 || arr[3] == 9)) {
        printf("%s", arr[1] == arr[2] ? "ignore" : "answer");
    } else {
        printf("%s", "answer");
    }
    return 0;
}