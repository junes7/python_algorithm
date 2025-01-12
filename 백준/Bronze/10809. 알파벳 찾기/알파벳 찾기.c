#include <stdio.h>
#include <string.h>

int  main(void) {
    char ch[100];
    int len,num[26];
    scanf("%s",ch);
    len=strlen(ch);
    for (int i = 0; i < 26; i++) {
        num[i] = -1;
    }

    for (int i = 0; i < len; i++) {
        if (num[ch[i] - 97] == -1)
            num[ch[i] - 97] = i;
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ",num[i]);
    }
}