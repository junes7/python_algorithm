#include <math.h>
#include <stdio.h>
#include <string.h>
int main(void) {
    int n, cntd = 0, cntp = 0;
    char elem[2];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", &elem);
        if (strcmp(elem, "D") == 0)
            cntd += 1;
        else
            cntp += 1;
        if (abs(cntd - cntp) == 2) break;
    }
    printf("%d:%d", cntd, cntp);
    return 0;
}