#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int h, l, a, b;
    bool check = false;
    scanf("%d %d %d %d",&h,&l,&a,&b);
    if (a <= l && b <= h * 2 || b <= l && a <= h * 2)
        check = true;
    printf("%s",check ? "YES" : "NO");
    return 0;
}