#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int cost, weight, idx = 0;
    double tcost, tweight, rlt = 0;
    char snacks[3][2] = {"S", "N", "U"};
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &cost, &weight);
        tcost = cost * 10 >= 5000 ? cost * 10 - 500 : cost * 10, tweight = weight * 10;
        if ((double)tweight / tcost > rlt) {
            rlt = tweight / tcost;
            idx = i;
        }
    }
    printf("%s", snacks[idx]);
    return 0;
}