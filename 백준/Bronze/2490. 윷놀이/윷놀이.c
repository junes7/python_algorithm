#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int yun[3][4], yun_list[3], dic[5] = {3, 2, 1, 0, 4};
    char rlt[5] = {'A', 'B', 'C', 'D', 'E'};
    memset(yun_list, 0, sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &yun[i][j]);
            yun_list[i] += yun[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (yun_list[i] == dic[j]) {
                printf("%c\n", rlt[j]);
                break;
            }
        }
    }
    return 0;
}