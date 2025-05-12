#include <stdio.h>
int main(void) {
    int t, e, v;
    scanf("%d",&t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d",&v,&e);
        printf("%d\n",2 + e - v);
    }
    return 0;
}