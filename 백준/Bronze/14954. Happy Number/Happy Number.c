#include <math.h>
#include <stdio.h>
int hpy(int n) {
    int s = 0;
    while (n > 0) {
        s += pow(n % 10, 2);
        n /= 10;
    }
    return s;
}
int main(void) {
    int n;
    scanf("%d", &n);
    while (1) {
        n = hpy(n);
        if (n == 4) {
            printf("%s", "UNHAPPY");
            break;
        } else if (n == 1) {
            printf("%s", "HAPPY");
            break;
        }
    }
    return 0;
}