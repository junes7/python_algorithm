#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, elem, idx = 0;
    char* st = (char*)malloc(sizeof(char) * 4);
    scanf("%d", &n);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &elem);
            if (elem == 7) {
                st[idx++] = 7 + 48;
            }
        }
    }
    st[idx] = '\0';
    printf("%s", idx == 3 ? st : "0");
    return 0;
}