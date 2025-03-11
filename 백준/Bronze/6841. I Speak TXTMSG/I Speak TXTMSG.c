#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    bool flag;
    char *st = (char *)malloc(sizeof(char) * 6);
    char abbrev[12][7] = {"CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA", "CCC", "CUZ", "TY", "YW", "TTYL"};
    char msg[12][31] = {"see you", "I’m happy", "I’m unhappy", "wink", "stick out my tongue", "sleepy", "totally awesome", "Canadian Computing Competition", "because", "thank-you", "you're welcome", "talk to you later"};
    while (scanf("%s", st) != EOF) {
        flag = true;
        for (int i = 0; i < 12; i++) {
            if (strcmp(st, abbrev[i]) == 0) {
                printf("%s\n", msg[i]);
                flag = false;
                break;
            }
        }
        if (flag) printf("%s\n", st);
        if (strcmp(st, abbrev[11]) == 0) break;
    }
    return 0;
}