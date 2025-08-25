#include <stdio.h>
int main(void) {
    int d, m, total = 0;
    scanf("%d %d", &d, &m);
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char weekdays[7][10] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    for (int i = 0; i < m - 1; i++)
        total += days[i];
    total += d - 1;
    printf("%s", weekdays[total % 7]);
    return 0;
}