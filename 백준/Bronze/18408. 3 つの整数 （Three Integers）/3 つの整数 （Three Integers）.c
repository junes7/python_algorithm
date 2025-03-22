#include <stdio.h>
int main(void) {
    int cnta = 0, cntb = 0, elem;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &elem);
        if (elem == 1)
            cnta += 1;
        else
            cntb += 1;
    }
    printf("%d", cnta > cntb ? 1 : 2);
    return 0;
}