#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int s, st = 0, idx = 0, *num = (int *)malloc(sizeof(int) * 17);
    char *t = (char *)malloc(sizeof(char) * 51), *temp, *ch = (char *)malloc(sizeof(char) * 6);
    memset(num, 0, sizeof(int) * 17);
    scanf("%s", t);
    temp = strtok(t, "-");
    while (temp != NULL) {
        if (strstr(temp, "+") == 0) {
            num[idx++] = atoi(temp);
        } else {
            s = 0, st = 0;
            for (int i = 0; i < strlen(temp); i++) {
                if (temp[i] == '+') {
                    strncpy(ch, temp + st, i - st + 1);
                    s += atoi(ch);
                    st = i + 1;
                }
            }
            strncpy(ch, temp + st, strlen(temp) - st + 1);
            s += atoi(ch);
            num[idx++] = s;
        }
        temp = strtok(NULL, "-");
    }
    s = num[0];
    for (int i = 1; i < idx; i++)
        s -= num[i];
    printf("%d ", s);
    return 0;
}