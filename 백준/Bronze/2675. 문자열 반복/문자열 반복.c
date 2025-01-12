#include <stdio.h>
#include <string.h>

int main(void) {
    int t,r,len;
    char ch[160];
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%d %s",&r,ch);
        len=strlen(ch);
        for(int j=0;j<len;j++) {
            for(int k=0;k<r;k++)
                printf("%c",ch[j]);
        }
        printf("\n");
    }
    return 0;
}