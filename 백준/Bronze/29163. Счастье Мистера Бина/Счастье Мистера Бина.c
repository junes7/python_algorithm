#include <stdio.h>
int main(void) {
    int n, even = 0, odd = 0, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0)
            even += 1;
        else
            odd += 1;
    }
    printf("%s", even > odd ? "Happy" : "Sad");
    return 0;
}