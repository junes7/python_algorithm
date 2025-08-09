#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, cnt[2];
    char *st = (char *)malloc(sizeof(char) * 1001);
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    bool flag;
    scanf("%d", &n);
    gets(st);
    for (int i = 0; i < n; i++) {
        gets(st);
        len = strlen(st);
        cnt[0] = 0, cnt[1] = 0;
        for (int j = 0; j < len; j++) {
            if (isalpha(st[j])) {
                if (isupper(st[j]))
                    st[j] += 32;
                flag = true;
                for (int k = 0; k < 5; k++) {
                    if (vowels[k] == st[j]) {
                        flag = false;
                        cnt[1] += 1;
                        break;
                    }
                }
                if (flag) cnt[0] += 1;
            }
        }
        printf("%d %d\n", cnt[0], cnt[1]);
    }
    return 0;
}