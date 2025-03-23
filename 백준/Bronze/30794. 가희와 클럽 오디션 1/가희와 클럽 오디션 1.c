#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int lv;
    char* verd = (char*)malloc(sizeof(char) * 8);
    scanf("%d %s", &lv, verd);
    char asmt[5][8] = {"miss", "bad", "cool", "great", "perfect"};
    int asmt_val[5] = {0, 200, 400, 600, 1000};
    for (int i = 0; i < 5; i++) {
        if (strcmp(asmt[i], verd) == 0) {
            printf("%d", asmt_val[i] * lv);
            break;
        }
    }
    return 0;
}