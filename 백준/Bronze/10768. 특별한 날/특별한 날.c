#include <stdio.h>
int main(void) {
    int m,d;
    scanf("%d",&m);
    scanf("%d",&d);
    if(m==2)
        printf(d==18?"Special":(d<18?"Before":"After"));
    else
        printf(m<2?"Before":"After");
    return 0;
}