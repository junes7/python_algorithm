#include <stdio.h>

int main(void) {
    int h,m;
    scanf("%d %d",&h,&m);
    if(m>=45)
        m-=45;
    else {
        if(h==0)
             h=24;
        h-=1;
        m+=15;
    }
    printf("%d %d\n",h,m);
    return 0;
}