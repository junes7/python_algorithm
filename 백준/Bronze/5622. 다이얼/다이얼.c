#include <stdio.h>
#include <string.h>

int main(void) {
    char t[10][5]={"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    char ch[100],temp[2];
    int s = 0, d = 1;
    scanf("%s",ch);
    for (int i = 0; i < strlen(ch); i++) {
        strncpy(temp,ch+i,1);
        for (int j = 0; j < 10; j++) {
            if(strstr(t[j],temp)!=NULL) {
                s += j + d;
            }
        }
    }
    printf("%d\n",s);
    return 0;
}