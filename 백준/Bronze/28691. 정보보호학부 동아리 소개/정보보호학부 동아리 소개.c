#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char ch;
    char abbrev[5] = {'M', 'W', 'C', 'A', '$'};
    char club[5][7] = {"MatKor", "WiCys", "CyKor", "AlKor", "$clear"};
    scanf("%c", &ch);
    for (int i = 0; i < 5; i++) {
        if (ch == abbrev[i]) {
            printf("%s", club[i]);
            break;
        }
    }
    return 0;
}