#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    char *st = (char *)malloc(sizeof(char) * 1001);
    scanf("%d", &n);
    scanf("%s", st);
    int cur[2] = {0, 0};
    char dir[4] = {'N', 'S', 'W', 'E'};
    int mark[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (st[i] == dir[j]) {
                cur[0] += mark[j][0];
                cur[1] += mark[j][1];
            }
        }
    }
    printf("%d", abs(cur[0]) + abs(cur[1]));
    return 0;
}