#include <stdio.h>
int main(void) {
    int cmd, rlt = 0;
    char dir[4] = {'N', 'E', 'S', 'W'};
    for (int i = 0; i < 10; i++) {
        scanf("%d", &cmd);
        rlt = (rlt + cmd) % 4;
    }
    printf("%c", dir[rlt]);
    return 0;
}