#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int idx = 0;
    char *st, *rlt, mbti[8] = {'E', 'I', 'S', 'N', 'T', 'F', 'J', 'P'};
    bool flag;
    st = (char *)malloc(sizeof(char) * 5);
    rlt = (char *)malloc(sizeof(char) * 5);
    scanf("%s", st);
    for (int i = 0; i < 8; i++) {
        flag = true;
        for (int j = 0; j < 4; j++) {
            if (mbti[i] == st[j]) {
                flag = false;
                break;
            }
        }
        if (flag)
            rlt[idx++] = mbti[i];
    }
    rlt[4] = '\0';
    printf("%s", rlt);
    return 0;
}