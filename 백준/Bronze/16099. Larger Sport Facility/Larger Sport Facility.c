#include <stdio.h>
int main(void) {
    int n;
    long long lt, wt, le, we;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%lld %lld %lld %lld",&lt,&wt,&le,&we);
        printf("%s\n",lt * wt == le * we ? "Tie" : (lt * wt < le * we ? "Eurecom" : "TelecomParisTech"));
    }
    return 0;
}