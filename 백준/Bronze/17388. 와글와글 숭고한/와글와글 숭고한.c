#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int elem, idx = 0, minn = 100, s = 0;
    char univ[3][9]={"Soongsil", "Korea", "Hanyang"};
    for (int i = 0; i < 3; i++) {
        scanf("%d",&elem);
        s += elem;
        if (minn > elem) {
            minn = elem;
            idx = i;
        }
    }
    printf("%s",s >= 100 ? "OK" : univ[idx]);
    return 0;
}