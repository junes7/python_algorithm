#include <stdio.h>
int main(void) {
    int s1, s2, p1, p2, st, pt;
    scanf("%d %d", &p1, &s1);
    scanf("%d %d", &s2, &p2);
    st = s1 + s2;
    pt = p1 + p2;
    if (pt == st)
        printf("%s", s1 == p2 ? "Penalty" : (s1 > p2 ? "Esteghlal" : "Persepolis"));
    else
        printf("%s", st > pt ? "Esteghlal" : "Persepolis");
    return 0;
}