#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t;
    char *name = (char *)malloc(sizeof(char) * 11);
    char *formatn = (char *)malloc(sizeof(char) * 11);
    char sname[4][11] = {"branksomeh", "koreainter", "stjohnsbur", "northlondo"};
    char abbrev[4][5] = {"BHA", "KIS", "SJA", "NLCS"};
    scanf("%s", name);
    for (int i = 0; i < 4; i++) {
        t = name[0] - sname[i][0];
        if (t >= 0) {
            for (int j = 0; j < 10; j++)
                formatn[j] = sname[i][j] + t > 122 ? (char)(sname[i][j] + t - 26) : (char)(sname[i][j] + t);
        } else {
            for (int j = 0; j < 10; j++)
                formatn[j] = sname[i][j] + t < 97 ? (char)(sname[i][j] + t + 26) : (char)(sname[i][j] + t);
        }
        formatn[10] = '\0';
        if (strcmp(name, formatn) == 0) {
            printf("%s", abbrev[i]);
            break;
        }
    }
    return 0;
}