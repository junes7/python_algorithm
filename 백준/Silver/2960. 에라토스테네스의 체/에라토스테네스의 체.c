#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, k, idx = 0, *rem = (int*)malloc(sizeof(int) * 1000);
    bool flag;
    scanf("%d %d", &n, &k);
    for (int i = 2; i < n + 1; i++) {
        flag = true;
        for (int j = 0; j < idx; j++) {
            if (rem[j] == i) {
                flag = false;
                break;
            }
        }
        if (flag)
            rem[idx++] = i;
        for (int l = i * 2; l < n + 1; l += i) {
            flag = true;
            for (int j = 0; j < idx; j++) {
                if (rem[j] == l) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                rem[idx++] = l;
        }
    }
    printf("%d", rem[k - 1]);
    return 0;
}