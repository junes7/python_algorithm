#include <stdio.h>
int main(void) {
    int n, condi, iter;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d",&condi,&iter);
        printf("%s\n",condi <= 2 && iter <= 1 || condi <= 1 && iter <= 2 ? "Yes" : "No");
    }
    return 0;
}