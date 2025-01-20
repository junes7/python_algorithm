#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
int main(void) {
    int n, m, elem, start, end, mid;
    bool flag;
    scanf("%d", &n);
    int* numList = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        numList[i] = elem;
    }
    scanf("%d", &m);
    int* guessList = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &elem);
        guessList[i] = elem;
    }
    qsort(numList, n, sizeof(int), compare);
    for (int i = 0; i < m; i++) {
        start = 0, end = n - 1;
        flag = false;
        while (start <= end) {
            mid = (start + end) / 2;
            if (numList[mid] == guessList[i]) {
                flag = true;
                break;
            } else if (numList[mid] > guessList[i]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        printf("%d ", flag ? 1 : 0);
    }
    return 0;
}