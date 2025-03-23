#include <stdio.h>
int main(void) {
    int g, p, t, id, gr;
    scanf("%d %d %d", &g, &p, &t);
    id = g * p;
    gr = g + p * t;
    printf("%d", id == gr ? 0 : (id < gr ? 1 : 2));
    return 0;
}