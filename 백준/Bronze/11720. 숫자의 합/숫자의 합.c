#include <stdio.h>

int main(void) {
    int n,s=0;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    for(int i=0;i<sizeof(ch);i++) {
        s+=ch[i]-48;
    }
    printf("%d\n",s);
    return 0;
}