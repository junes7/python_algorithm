#include <stdio.h>
int main(void) {
    int y1, m1, d1, y2, m2, d2;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);
    printf("%d\n%d\n%d", m2 > m1 || (m2 == m1 && d2 >= d1) ? y2 - y1 : y2 - y1 - 1, y2 - y1 + 1, y2 - y1);
    return 0;
}