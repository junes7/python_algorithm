#include <stdio.h>

int main(void) {
    int n, cnt = 0, bags[2] = {5, 3};
    scanf("%d", &n);
    if (n > bags[0]) {
        while (n % bags[0] > 0) {
            n -= bags[1];
            cnt += 1;
        }
    }
    for (int i = 0; i < sizeof(bags) / sizeof(int); i++) {
        cnt += n / bags[i];
        n %= bags[i];
    }
    printf("%d", n != 0 ? -1 : cnt);
    return 0;
}