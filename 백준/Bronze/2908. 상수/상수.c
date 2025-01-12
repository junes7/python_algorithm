#include <stdio.h>

int main(void) {
    int num[2],t,d;
    scanf("%d %d",&num[0],&num[1]);
    for(int i=0;i<2;i++) {
        t=0,d=100;
        while(num[i]>0) {
            t+=num[i]%10*d;
            d/=10;
            num[i]/=10;
        }
        num[i]=t;
    }
    printf("%d\n",num[0]>num[1]?num[0]:num[1]);
    return 0;
}