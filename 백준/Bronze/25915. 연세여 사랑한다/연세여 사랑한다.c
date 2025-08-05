#include <math.h>
#include <stdio.h>
int main(void) {
    char st, tar[12] = "ILOVEYONSEI";
    scanf("%c", &st);
    int rlt = abs(tar[0] - st);
    for (int i = 1; i < 11; i++)
        rlt += abs(tar[i] - tar[i - 1]);
    printf("%d", rlt);
    return 0;
}