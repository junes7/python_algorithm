#include <stdio.h>
int calculate(int n1, char o, int n2) {
    if (o != '/') {
        return o == '*' ? n1 * n2 : (o == '+' ? n1 + n2 : n1 - n2);
    } else {
        if (n1 < 0 && n2 >= 0)
            return ((n1 * -1) / n2) * -1;
        else if (n1 >= 0 && n2 < 0)
            return (n1 / (n2 * -1)) * -1;
        else
            return n1 / n2;
    }
}
int main(void) {
    int k1, k2, k3, rlt1, rlt2;
    char o1, o2;
    scanf("%d %c %d %c %d", &k1, &o1, &k2, &o2, &k3);
    rlt1 = calculate(calculate(k1, o1, k2), o2, k3);
    rlt2 = calculate(k1, o1, calculate(k2, o2, k3));
    printf("%d\n", rlt1 < rlt2 ? rlt1 : rlt2);
    printf("%d", rlt1 > rlt2 ? rlt1 : rlt2);
    return 0;
}