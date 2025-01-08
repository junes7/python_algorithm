#include <stdio.h>

int main(void) {
    int h,m,d;
    scanf("%d %d",&h,&m);
    scanf("%d",&d);
    if(m+d<60)
        m+=d;
    else {
        h+=(m+d)/60;
        if(h>=24)
            h-=24;
        m=(m+d)%60;
    }
    printf("%d %d\n",h,m);
    return 0;
}