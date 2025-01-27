#include <stdio.h>

int main(void) {
    int t, buttons[3] = {300, 60, 10}, cnts[3];
    scanf("%d", &t);
    for (int i = 0; i < sizeof(buttons) / sizeof(int); i++) {
        cnts[i] = t / buttons[i];
        t %= buttons[i];
    }
    if (t > 0)
        printf("%d", -1);
    else
        for (int i = 0; i < sizeof(cnts) / sizeof(int); i++)
            printf("%d ", cnts[i]);
    return 0;
}