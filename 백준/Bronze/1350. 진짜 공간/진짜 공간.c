#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cls, *files;
    long long rlt = 0;
    scanf("%d", &n);
    files = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &files[i]);
    scanf("%d", &cls);
    for (int i = 0; i < n; i++)
        rlt += (files[i] / cls + (files[i] % cls == 0 ? 0 : 1)) * cls;
    printf("%lld", rlt);
    return 0;
}