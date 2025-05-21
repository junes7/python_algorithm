#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char gpa_s[13][3] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F"};
    double gpa_n[13] = {4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0};
    int n, cre;
    double t_cre = 0, t_gpa = 0;
    char *sub = (char *)malloc(sizeof(char) * 101);
    char *grd = (char *)malloc(sizeof(char) * 3);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", sub, &cre, grd);
        for (int j = 0; j < 13; j++) {
            if (strcmp(gpa_s[j], grd) == 0) {
                t_gpa += cre * gpa_n[j];
                t_cre += cre;
                break;
            }
        }
    }
    printf("%.2f", t_gpa / t_cre + 0.000000000001);
    return 0;
}