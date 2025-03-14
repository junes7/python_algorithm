#include <stdio.h>
#include <time.h>
int main(void) {
    time_t timer = time(NULL);
    char month[3];
    struct tm *t = localtime(&timer);
    printf("%d\n", t->tm_year + 1900);
    if (t->tm_mon + 1 < 10) {
        month[0] = 0 + 48;
        month[1] = t->tm_mon + 1 + 48;
    } else {
        month[0] = (t->tm_mon + 1) / 10 + 48;
        month[1] = (t->tm_mon + 1) % 10 + 48;
    }
    month[2] = '\0';
    printf("%s\n", month);
    printf("%d", t->tm_mday);
    return 0;
}