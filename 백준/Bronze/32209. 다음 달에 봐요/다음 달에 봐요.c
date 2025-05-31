#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int q, a, b, rlt = 0;
    bool check = true;
    scanf("%d", &q);
    while (q) {
        scanf("%d %d", &a, &b);
        if (a == 1)
            rlt += b;
        else if (a == 2)
            rlt -= b;
        if (rlt < 0) check = false;
        q -= 1;
    }
    printf("%s", check ? "See you next month" : "Adios");
    return 0;
}