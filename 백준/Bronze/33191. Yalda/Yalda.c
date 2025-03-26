#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int b, t = -1;
    bool flag;
    int *obj = (int *)malloc(sizeof(int) * 3);
    int pref[3] = {1, 2, 3};
    char name[3][13] = {"Watermelon", "Pomegranates", "Nuts"};
    scanf("%d", &b);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &obj[i]);
        if (obj[i] > b) continue;
        t = i;
        break;
    }
    flag = true;
    printf("%s", t == -1 ? "Nothing" : name[t]);
    return 0;
}