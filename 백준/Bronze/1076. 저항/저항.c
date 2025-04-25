#include <math.h>
#include <stdio.h>
#include <string.h>
int main(void) {
    char t[7], rlt[3];
    char dic[10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    char num[10][2] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    int idx = 0;
    long long n;
    for (int i = 0; i < 2; i++) {
        scanf("%s", t);
        for (int j = 0; j < 10; j++) {
            if (strcmp(dic[j], t) == 0) {
                rlt[idx++] = num[j][0];
                break;
            }
        }
    }
    rlt[idx] = '\0';
    n = atoi(rlt);
    scanf("%s", t);
    for (int j = 0; j < 10; j++) {
        if (strcmp(dic[j], t) == 0) {
            n *= pow(10, num[j][0] - 48);
            break;
        }
    }
    printf("%lld", n);
    return 0;
}