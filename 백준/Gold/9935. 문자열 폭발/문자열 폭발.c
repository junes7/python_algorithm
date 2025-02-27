#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int lst, lbomb, idx = 0;
    char* st = (char*)malloc(sizeof(char) * 1000001);
    char* bomb = (char*)malloc(sizeof(char) * 37);
    char* stack = (char*)malloc(sizeof(char) * 1000000);
    bool flag;
    scanf("%s", st);
    scanf("%s", bomb);
    lst = strlen(st), lbomb = strlen(bomb);
    for (int i = 0; i < lst; i++) {
        stack[idx++] = st[i];
        if (idx >= lbomb) {
            flag = true;
            for (int j = 0; j < lbomb; j++) {
                if (stack[idx - lbomb + j] != bomb[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int j = 0; j < lbomb; j++) {
                    idx--;
                }
            }
        }
    }
    stack[idx] = '\0';
    printf("%s", idx > 0 ? stack : "FRULA");
    return 0;
}