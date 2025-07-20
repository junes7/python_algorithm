#include <stdio.h>
int main(void) {
    int n, pri_num, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        pri_num = elem == 1 ? 0 : 1;
        for (int j = 2; j < elem; j++) {
            if (elem % j == 0)
                pri_num += j;
        }
        printf("%s\n", pri_num == elem ? "Perfect" : (pri_num < elem ? "Deficient" : "Abundant"));
    }
    return 0;
}