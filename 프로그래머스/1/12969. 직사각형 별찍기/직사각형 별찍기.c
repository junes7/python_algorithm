#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i=1;i<=a*b;i++) {
        printf("*");
        if(i%a==0)
            printf("\n");
    }
    return 0;
}