#include <stdio.h>
int main(void) {
    int n, cnt, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &elem);
            printf("%d ", elem);
            if (elem >= 10)
                cnt += 1;
        }
        printf("\n");
        if (cnt == 0)
            printf("%s\n\n", "zilch");
        else if (cnt == 1)
            printf("%s\n\n", "double");
        else if (cnt == 2)
            printf("%s\n\n", "double-double");
        else
            printf("%s\n\n", "triple-double");
    }
    return 0;
}