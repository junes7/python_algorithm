#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, grd;
    char *name = (char *)malloc(sizeof(char) * 11);
    char *rlt = (char *)malloc(sizeof(char) * 3);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", name, &grd);
        if (grd >= 97)
            rlt = "A+";
        else if (grd >= 90)
            rlt = "A";
        else if (grd >= 87)
            rlt = "B+";
        else if (grd >= 80)
            rlt = "B";
        else if (grd >= 77)
            rlt = "C+";
        else if (grd >= 70)
            rlt = "C";
        else if (grd >= 67)
            rlt = "D+";
        else if (grd >= 60)
            rlt = "D";
        else
            rlt = "F";
        printf("%s %s\n", name, rlt);
    }
    return 0;
}