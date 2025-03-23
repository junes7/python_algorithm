#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, cnt1 = 0, cnt2 = 0;
    char *st = (char *)malloc(sizeof(char) * 51);
    scanf("%s", st);
    len = strlen(st);
    char vowel1[5] = {'a', 'e', 'i', 'o', 'u'};
    char vowel2[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (vowel1[j] == st[i]) {
                cnt1 += 1;
                break;
            }
        }
        for (int j = 0; j < 6; j++) {
            if (vowel2[j] == st[i]) {
                cnt2 += 1;
                break;
            }
        }
    }
    printf("%d %d", cnt1, cnt2);
    return 0;
}