#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, rlt;
    bool flag;
    scanf("%d", &n);
    char *temp, *st = (char *)malloc(sizeof(char) * 10);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        rlt = 0, len = strlen(st), flag = true;
        for (int j = 0; j < len; j++) {
            if (st[j] == '=') {
                flag = false;
                break;
            }
        }
        if (flag) {
            temp = strtok(st, "+");
            while (temp != NULL) {
                rlt += atoi(temp);
                temp = strtok(NULL, "=");
            }
            printf("%d\n", rlt);
        } else {
            printf("%s\n", "skipped");
        }
    }
    return 0;
}