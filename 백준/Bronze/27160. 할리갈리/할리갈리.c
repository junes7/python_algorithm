#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct fcnt {
    char fruit[11];
    int cnt;
};
int main(void) {
    struct fcnt cards[4] = {{"STRAWBERRY", 0}, {"BANANA", 0}, {"LIME", 0}, {"PLUM", 0}};
    char *st = (char *)malloc(sizeof(char) * 11);
    int t, n;
    bool flag = false;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s %d", st, &n);
        for (int j = 0; j < 4; j++) {
            if (strcmp(st, cards[j].fruit) == 0) {
                cards[j].cnt += n;
                break;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        if (cards[i].cnt == 5) {
            flag = true;
            break;
        }
    }
    printf("%s", flag ? "YES" : "NO");
    return 0;
}