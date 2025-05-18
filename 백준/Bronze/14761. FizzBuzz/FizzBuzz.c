#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x, y, n;
    char *st = (char *)malloc(sizeof(char) * 4);
    scanf("%d %d %d", &x, &y, &n);
    for (int i = 1; i < n + 1; i++) {
        if (i % x == 0 && i % y == 0)
            printf("%s\n", "FizzBuzz");
        else if (i % x == 0)
            printf("%s\n", "Fizz");
        else if (i % y == 0)
            printf("%s\n", "Buzz");
        else
            printf("%d\n", i);
    }
    return 0;
}