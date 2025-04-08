#include <stdio.h>
int main(void) {
    int t1, m1, t2, m2, time;
    scanf("%d %d %d %d", &t1, &m1, &t2, &m2);
    time = (t2 - t1) * 60 + (m2 - m1);
    if (time < 0)
        time += 24 * 60;
    printf("%d %d", time, time / 30);
    return 0;
}