#include <stdio.h>
int main(void) {
    int n, rem = 0, stu, app;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &stu, &app);
        rem += app % stu;
    }
    printf("%d", rem);
    return 0;
}