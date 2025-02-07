#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, s, idx = 0, *num = (int*)malloc(sizeof(int) * 2);
    scanf("%d", &t);
    char ch[4], *temp;
    for (int i = 0; i < t; i++) {
        s = 0, idx = 0;
        scanf("%s", ch);
        temp = strtok(ch, ",");
        while (temp != NULL) {
            num[idx++] = atoi(temp);
            temp = strtok(NULL, ",");
        }
        for (int j = 0; j < idx; j++) {
            s += num[j];
        }
        printf("%d\n", s);
    }
    return 0;
}