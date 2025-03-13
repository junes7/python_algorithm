#include <stdio.h>
int main(void) {
    int Sab, Fab;
    scanf("%d", &Sab);
    scanf("%d", &Fab);
    printf("%s", Sab > Fab ? "flight" : "high speed rail");
    return 0;
}