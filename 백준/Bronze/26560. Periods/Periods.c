#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n;
    char c;
    bool p;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        while (1) {
            if (scanf("%c", &c) != 1 || c == '\n') break;
            p = c == '.';
            printf("%c", c);
        }
        printf("%s", p ? "\n" : ".\n");
    }
    return 0;
}